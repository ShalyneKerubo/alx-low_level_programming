#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to string to be printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
