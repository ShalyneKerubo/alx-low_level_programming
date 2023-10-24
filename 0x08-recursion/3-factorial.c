#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given no.
 * @n: an integer
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
