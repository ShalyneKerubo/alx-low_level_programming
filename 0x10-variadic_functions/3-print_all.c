#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;

	char c;
	int i, j;
	float f;
	char *s;

	va_start(args, format);
	j = 0;
	while (format && format[j])
	{
		if (j > 0 && (format[j - 1] == 'c' || format[j - 1] == 'i' ||
			format[j - 1] == 'f' || format[j - 1] == 's'))
			printf(", ");
		switch (format[j])
		{
			case 'c':
				printf("%c", c = va_arg(args, int));
				break;
			case 'i':
				printf("%d", i = va_arg(args, int));
				break;
			case 'f':
				printf("%f", f = va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				break;
			default:
				j++;
				continue;
		}
		j++;
	}
	va_end(args);
	putchar('\n');
}
