#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to string to be printed in half
 * The function should print the second half of the string
 * If the number of characters is odd, the function should print the last
 * n characters of the string, where n = (length_of_the_string - 1) / 2
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, n;
	int len = 0;

	while (str[len] != 0)
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = ((len - 1) / 2) + 1;
	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
