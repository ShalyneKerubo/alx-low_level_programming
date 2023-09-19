#include <stdio.h>
#include "main.h"

/**
 * print_array - prints 'n' elements of an array of int.s, followed by '\n'
 * @a: pointer to an array
 * @n: no. of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The no.s should be displayed in the same order as they are stored in the arr
 * You are allowed to use 'printf'
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
