#include "main.h"

/**
 * main - Entry point
 *
 * Description: a C program prints using for
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char text[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(text[x]);
	}
	_putchar('\n');
	return (0);
}
