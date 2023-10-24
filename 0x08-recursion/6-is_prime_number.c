#include "main.h"
#include <stdio.h>

/**
 * _prime - function that allows operation of 'is_prime_number'.
 * @x: an integer
 * @y: an integer
 *
 * Return: 1 if integer is a prime number, otherwise 0.
 */

int _prime(int x, int y)
{
	if ((y * y) == x || x < 0)
		return (0);
	else if ((y * y) > x)
		return (1);
	else
		return (_prime(x, (y + 1)));
}

/**
 * is_prime_number - function that checks for prime numbers
 * @n: an integer
 *
 * Return: 1 if integer is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
	return (_prime(n, 0));
}
