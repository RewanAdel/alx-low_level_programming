#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program prints single digit numbers using while
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
