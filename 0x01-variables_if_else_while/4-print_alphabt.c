#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except 'q' and 'e',
 * -- followed by a new line.
 *  Only use putchar() twice
 *
 *  Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
