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
	int n = 0;
	int i;
	int m;

	while (n <= 9)
	{
		i = 0;
		while (i <= 9)
		{
			m = n * i;
			if (i == 0)
			{
				_putchar('0' + m);
			}
			else if (m < 10)
			{
				_putchar(' ');
				_putchar('0' + m);
			}
			else
			{
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
		_putchar('\n');
		n++;
	}

}

