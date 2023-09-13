#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 *  @n: natural number of type int
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 * You are allowed to use the standard library
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
	}
	if (n != 98)
	{
		for (i = n; i > 97; i--)
		{
			if (i > 97)
			{
				printf("%d", i);
				if (i != 98)
					printf(", ");
			}
		}
	}
	printf("\n");
}
