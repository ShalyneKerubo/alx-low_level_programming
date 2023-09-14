#include "main.h"

/**
 * more_numbers - prints 10 times the no.s 0 to 14, followed by a new line
 * You can only use _putchar three times
 *
 * Return: void
 */

void more_numbers(void)
{
	int times, set;

	for (times = 1; times <= 10; times++)
	{
		for (set = 0; set <= 14; set++)
		{
			if (set > 9)
				_putchar(set / 10 + '0');
			_putchar(set % 10 + '0');
		}
		_putchar('\n');
	}
}
