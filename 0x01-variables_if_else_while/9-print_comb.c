#include <stdio.h>

/**
 * main - main block/ entry point
 * Description: Prints all possible combinations of single-digit numbers.
 * Numbers must be separated by commas and a space.
 * Numbers should be printed in ascending order.
 * You can only use `putchar` to print to the console.
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type char
 *
 * Return: 0
 */

int main(void)
{
	int sDigit;

	for (sDigit = 0; sDigit <= 9; sDigit++)
	{
		putchar('0' + sDigit);
		if (sDigit < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
