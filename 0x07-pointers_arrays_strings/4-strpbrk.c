#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * In other words, it locates the first occurrence in the string
 * 's' of any of the bytes in the string 'accept'
 * @s: string to be scanned
 * @accept: string containing characters to match
 *
 * Return: pointer to the byte in 's' that matches one of the bytes
 * in 'accept', or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		char *new_ptr;

		for (new_ptr = accept; *new_ptr != '\0'; new_ptr++)
		{
			if (s[i] == *new_ptr)
				return (&s[i]);
		}
	}
	return (NULL);
}
