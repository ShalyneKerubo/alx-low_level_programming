#include <stdio.h>

/**
 * main - main block/ entry point
 * Description: Prints the no.s 1 to 100 followed by a newline.
 * For multiples of three print 'Fizz' instead of the number
 * For multiples of five print 'Buzz'
 * For numbers which are multiples of both three and five print 'FizzBuzz'
 * Each number or word should be separated by a space
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
