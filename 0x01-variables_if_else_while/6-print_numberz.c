#include <stdio.h>

/**
 * main - Prints all single digit no.s of base 10 starting from 0,
 * followed by a new line.
 * Do not use any variable of type 'char'
 * Only use putchar() twice
 *
 * Return: 0
 */

int main(void)
{
	int sDigit;

	for (sDigit = '0'; sDigit <= '9'; sDigit++)
		putchar(sDigit);
	putchar('\n');
	return (0);
}
