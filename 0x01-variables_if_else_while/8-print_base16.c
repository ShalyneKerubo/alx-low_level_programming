#include <stdio.h>

/**
 * main - Prints all the no.s of base 16 in lowercase,
 * followed by a new line.
 * Only use putchar() thrice
 *
 * Return: 0
 */

int main(void)
{
	char hex;

	for (hex = '0'; hex <= '9'; hex++)
		putchar(hex);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
