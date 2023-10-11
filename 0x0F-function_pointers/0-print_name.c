#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to a function that prints a name as is
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
