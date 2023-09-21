#include "main.h"

/**
 * *_strncpy - function that copies a string up to 'n' bytes,
 * from 'src' to 'dest'
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: no. of bytes to be copied from  'src'
 *
 * Return: a pointer to 'dest'
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
