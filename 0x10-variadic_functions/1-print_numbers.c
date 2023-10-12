#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between no.s
 * @n: no. of integers passed to the function
 *
 * Return:
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int print_num;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		print_num = va_arg(num, int);
		if (separator == NULL)
			continue;
		printf("%d", print_num);
		if (i != 3)
			printf("%s", separator);
	}
	va_end(num);
	putchar('\n');
}
