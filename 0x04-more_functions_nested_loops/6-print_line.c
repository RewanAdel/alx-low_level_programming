#include "main.h"

/**
 * print_line - prints a line of _ n
 *
 * @n: is the number of times the character _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
