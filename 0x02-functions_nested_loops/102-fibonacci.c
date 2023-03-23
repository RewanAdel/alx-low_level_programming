#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program prints prints first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int sum, a, b;
	int count;

	sum = 0;
	a = 0;
	b = 1;
	count = 0;

	while (count < 49)
	{
		sum = a + b;
		printf("%li, ", sum);
		a = b;
		b = sum;

		count++;
	}
	sum = a + b;
	printf("%li\n", sum);

	return (0);
}
