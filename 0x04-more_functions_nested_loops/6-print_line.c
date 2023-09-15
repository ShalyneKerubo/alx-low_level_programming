#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: integer that states the no. of times the character '_' should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print '\n'
 *
 * Return: straight line
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
