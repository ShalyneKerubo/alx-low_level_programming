#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * -- followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int sDigit;

	for (sDigit = 0; sDigit < 10; sDigit++)
		printf("%d", sDigit);

	printf("\n");

	return (0);
}
