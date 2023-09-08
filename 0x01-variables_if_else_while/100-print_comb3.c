#include <stdio.h>

/**
 * main - main block/ entry point
 * Description: Prints all possible different combinations of two digits.
 * Numbers must be separated by commas and a space.
 * The two digits must be different.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use 'putchar' to print to the console.
 * You can only use 'putchar' up to five times.
 * You are not allowed to use any variable of type 'char'
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
		for (j = 1; j < 10; j++)
			if (i != j && i < j)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
