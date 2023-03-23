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
	int x = 0;
	long int a = 0, b = 1, then;

	while (x < 50)
	{
		then = a + b;
		b = then;
		a = b;
		printf("%lu", then);

		if (x < 49)
		{
			printf(", ");
		}
		x++;
	}
	putchar('\n');
	return (0);
}


