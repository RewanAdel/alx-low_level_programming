#include "main.h"

/**
 * more_numbers - prints numbers 0 - 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int n, line, count;

	for (line = 1; line <= 10; line++)
	{
		for (count = 0; count <= 14; count++)
		{
			n = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				n = count % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
