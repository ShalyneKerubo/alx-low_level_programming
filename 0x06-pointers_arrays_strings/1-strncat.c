#include "main.h"

/**
 * *_strncat - concatenates two strings, except that:
 * it will use at most 'n' bytes from 'src'; and
 * 'src' does not need to be null-terminated if it contains 'n' or more bytes
 * @dest: string to be appended to
 * @src: string to be appended
 * @n: no. of bytes to be copied from 'src'
 *
 * Return: a pointer to the resulting string 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
