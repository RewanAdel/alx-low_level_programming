#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: a C program that prints the 9 times table starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int n, i, m, ones, tens;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			m = n * i;
			tens = m / 10;
			ones = m % 10;

			if (i == 0)
			{
				_putchar('0');
			}
			else if (m < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
