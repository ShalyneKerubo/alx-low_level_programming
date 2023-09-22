#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: pointer to a string
 *
 * Return: pointer to a string
 */

char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; sep[j]; j++)
		{
			if (s[i] == sep[j] && (s[i + 1] >= 97 && s[i + 1] <= 122))
				s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
