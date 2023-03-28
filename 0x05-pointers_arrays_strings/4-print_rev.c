#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int text = 0;

	while (s[text])
	{
		text++;
	}
	while (text--)
	{
		_putchar(s[text]);
	}
	_putchar('\n');
}
