#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to be appended
 * Overwrite the terminating null byte (\0) originally at the end of 'dest',
 * and add it again at the end after appending 'src'
 *
 * Return: a pointer to the resulting string 'dest'
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
