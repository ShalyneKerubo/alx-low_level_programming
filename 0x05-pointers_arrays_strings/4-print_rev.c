#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to a string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, len, tmp;
	int j = 0;

	while (*s != '\0')
		j++;
	len = j;
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
		_putchar(s[i]);
	}
	_putchar('\n');
}
