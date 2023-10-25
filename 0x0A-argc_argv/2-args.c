#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
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
