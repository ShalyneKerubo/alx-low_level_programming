#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last, lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{	last = -lastDigit;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		_putchar(lastDigit + '0');
		return (0);
	}
}
