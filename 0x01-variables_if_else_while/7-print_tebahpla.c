#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Only use putchar() twice
 *
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
