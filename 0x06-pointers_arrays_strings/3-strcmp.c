#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to the string s1
 * @s2: pointer to the string s2
 *
 * Return: 0 if both strings are identical,
 * '>0' if the 1st non-matching char. has a higher ascii value in s1 than s2,
 * '<0' if the 1st non-matching char. has a lower ascii value in s1 than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] !=  s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
