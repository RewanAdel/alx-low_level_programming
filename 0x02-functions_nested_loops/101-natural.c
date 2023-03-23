#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program computes, prints sum of multiples 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, sum;

	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}

	printf("%d\n", sum);

	return (0);
}

