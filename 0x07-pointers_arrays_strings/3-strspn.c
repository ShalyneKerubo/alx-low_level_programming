#include "main.h"
#include <stdbool.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Return: no. of bytes in the initial segment of 's'
 * which consist only of bytes from 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;
	bool match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = false;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = true;
				count++;
				break;
			}
		}
		if (!match)
			break;
	}
	return (count);
}
