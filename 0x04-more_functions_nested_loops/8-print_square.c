#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square of type int
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
