#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: no. of command-line arguments
 * @argv: array of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
