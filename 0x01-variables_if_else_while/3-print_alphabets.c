#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase,
 * -- followed by a new line
 * Only use putchar() thrice
 *
 * Return: 0
 */

int main(void)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);

	putchar('\n');

	return (0);
}
