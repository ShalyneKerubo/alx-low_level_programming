#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all of its parameters
 * @n: count of remaining arguments, which are added up and
 * the result returned
 *
 * Return: sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list num;
	int sum = 0;

	va_start(num, n);
	for (i = 0; i < n; i++)
		sum += va_arg(num, int);
	va_end(num);
	return (sum);
}
