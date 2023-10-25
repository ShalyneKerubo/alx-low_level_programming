#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string with an integer
 * You need to take into account all the '-' and '+' signs before the no.
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to use long
 * You are not allowed to declare new variables of “type” array
 * You are not allowed to hard-code special values
 * We will use the -fsanitize=signed-integer-overflow gcc flag to
 * compile your code
 *
 * Return: 0
 */

int _atoi(char *s)
{
	int num, a, flag;

	flag = 1;
	a = num = 0;

	while (((s[a] < '0') || s[a] > '9') && s[a] != 0)
	{
		if (s[a] == '-')
			flag = flag * -1;
		a++;
	}
	while (((s[a] >= '0') && s[a] <= '9') && s[a] != 0)
	{
		if (num >= 0)
		{
			num = num * 10 - (s[a] - '0');
			a++;
		}
		else
		{
			num = num * 10 - (s[a] - '0');
			a++;
		}
	}
	flag = flag * -1;
	return (num * flag);
}
