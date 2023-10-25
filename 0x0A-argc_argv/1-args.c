#include <stdio.h>

/**
 * main - program that prints the no. of arguments passed into it.
 * @argc: no. of command-line arguments
 * @argv: array of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
