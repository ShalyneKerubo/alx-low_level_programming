#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * You can only use _putchar twice
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
