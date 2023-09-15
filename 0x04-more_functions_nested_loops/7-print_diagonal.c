#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer that states the no. of times the character '\' should be printed
 * The diagonal should end with a '\n'
 * If n is 0 or less, the function should only print a '\n'
 *
 * Return: a diagonal line
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		if (i >= 1)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
