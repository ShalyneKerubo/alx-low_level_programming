#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: alphabetic character of data type int
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * Otherwise return 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
