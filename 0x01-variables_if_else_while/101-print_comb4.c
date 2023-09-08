#include <stdio.h>

/**
 * main - main block/ entry point
 * Description: Prints all possible different combinations of three digits.
 * Numbers must be separated by commas and a space
 * The three digits must be different
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use 'putchar' to print to the console
 * You can only use 'putchar' up to six times
 * You are not allowed to use any variable of type 'char'
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
		for (j = 1; j < 10; j++)
			for (k = 2; k < 10; k++)
			{
				if ((i != j && j != k && i != k) && (i < j && j < k))
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	putchar('\n');
	return (0);
}
