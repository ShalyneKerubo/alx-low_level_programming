#include <stdio.h>

/**
 * main - Prints the alpahbet in lowercase
 * Use putchar() only twice
 *
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
