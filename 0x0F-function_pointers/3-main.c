#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: no. of command-line arguments
 * @argv: array of char. pointers/ strings containing command-line arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num_1, num_2, result;
	char *operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	operator = argv[2];

	operation = get_op_func(operator);
	result = operation(num_1, num_2);
	printf("%d\n", result);

	return (0);
}
