#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int p = 612852475143, v = p, d = 2;

	while (v != d)
	{
		if (v % d == 0)
		{
			v = v / d;
		}
		else
		{
			d++;
		}
	}

	printf("%li\n", v);

	return (0);
}
