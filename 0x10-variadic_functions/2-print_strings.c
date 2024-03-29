#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: no. of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *print_str;
	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		print_str = va_arg(string, const char *);
		if (print_str == NULL)
			printf("(nil)");
		else
			printf("%s", print_str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(string);
	putchar('\n');
}
