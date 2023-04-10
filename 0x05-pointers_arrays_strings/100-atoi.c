#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: input string to convert
 *
 * Return: An integer
 */

int _atoi(char *s)
{
	int signs = 1;
	unsigned int numbers = 0;

	do {
		if (*s == '-')
		{
			signs *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			numbers = (numbers * 10) + (*s - '0');
		}
		else if (numbers > 0)
			break;
	} while (*s++);

	return (signs * numbers);
}
