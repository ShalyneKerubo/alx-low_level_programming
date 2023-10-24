#include "main.h"
#include <stdio.h>

/**
 * wildcmp -  compares two strings.
 * @s1: first string to be compared
 * @s2: second string to be compared
 * s2 can contain the special character '*'.
 * The special char '*' can replace any string (including an empty string)
 *
 * Return: 1 if strings are identical, else 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
