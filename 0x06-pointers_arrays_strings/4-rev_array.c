#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to an array 'a' of integers
 * @n: the no. of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
