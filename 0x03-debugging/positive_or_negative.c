#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative -  test that the function positive or negative
 *
 * Description: a C program prints positive or negative using if
 *
 * Return: Always 0 (Success)
 */

int positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
