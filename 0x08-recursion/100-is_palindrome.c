#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: a pointer to a string
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * check_palindrome - checks if string is a palindrome.
 * @s: a pointer to a string
 * @len: string length variable of type int.
 *
 * Return: 1 if a string is a palindrome else 0.
 */

int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
		return (check_palindrome(s + 1, len - 2));
	else
		return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: a pointer to a string
 *
 * Return: 1 if a string is a palindrome else 0.
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (check_palindrome(s, len));
}
