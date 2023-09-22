#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: pointer to a string
 *
 * Return: pointer to a string
 */

char *leet(char *s)
{
	int i, j;
	int k = 0;
	char ch[] = "aAeEoOtTlL";
	char encode[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (s[i] == ch[j])
			{
				k = j;
				s[i] = encode[k];
			}
		}
	}
	return (s);
}
