#include "main.h"

/**
 * print_most_numbers - prints the no.s 0 to 9, followed by a new line
 * Do not print 2 and 4
 * You can only use _putchar twice
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		if (digit != 2 && digit != 4)
			_putchar(digit + '0');
	_putchar('\n');
}
