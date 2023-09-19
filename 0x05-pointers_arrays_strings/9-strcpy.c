#include "main.h"

/**
 * *_strcpy - copies the string pointed to by 'src', including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: pointer to the string to be copied to
 * @src: pointer to the string to be copied from
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
