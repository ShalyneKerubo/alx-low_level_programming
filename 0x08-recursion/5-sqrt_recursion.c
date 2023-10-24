#include "main.h"
#include <stdio.h>

/**
 * _sqrt - function that allows operation of '_sqrt_recursion'
 * @x: integer that defines square root
 * @y: integer that compares 'x'
 *
 * Return: natural square root else -1.
 */

int _sqrt(int x, int y)
{
	int sqrt;

	sqrt = y * y;
	if (sqrt == x)
		return (y);
	else if (sqrt < x)
		return (_sqrt(x, y + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a no.
 * @n: an integer
 *
 * Return: natural square root else -1.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
