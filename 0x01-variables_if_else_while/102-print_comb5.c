#include <stdio.h>

/**
 * main - main block/ entry point
 * Description - Prints all possible combinations of two two-digit no.s
 * Numbers should range from 0 to 99
 * The two no.s should be separated by a space
 * All no.s should be printed with two digits.
 * 1 should be printed as 01
 * The combination of no.s must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of the no.s 0 and 1
 * You can only use 'putchar' to print to the console
 * You can only use 'putchar' up to eight times
 * You are not allowed to use any variable of type 'char'
 *
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 100; x++)
	{
		for (y = 1; y < 100; y++)
		{
			if (x < y && x != y)
			{
				putchar('0' + x / 10);
				putchar('0' + x % 10);
				putchar(' ');
				putchar('0' + y / 10);
				putchar('0' + y % 10);
				if (x < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
