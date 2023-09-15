#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 * If 'size' is 0 or less, the function should print only a new line
 * Use the character '#' to print the triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int rowNum, numSpace, numSymbol;

	if (size <= 0)
		_putchar('\n');
	for (rowNum = 1; rowNum <= size; rowNum++)
	{
		for (numSpace = 1; numSpace <= size - rowNum; numSpace++)
			_putchar(' ');
		for (numSymbol = 1; numSymbol <= rowNum; numSymbol++)
			_putchar('#');
		_putchar('\n');
	}
}
