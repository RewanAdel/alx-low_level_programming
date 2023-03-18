#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program prints all possible combinations of single-digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + 48);

		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}

		d++;
	}
	putchar('\n');
	return (0);
}


