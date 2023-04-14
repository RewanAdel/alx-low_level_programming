#include "main.h"

/**
 * main - generates random valid passwords for a program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	char y;

	srand(time(NULL));
	while (x <= 2645)
	{
		y = rand() % 128;
		x += y;
		putchar(y);
	}
	putchar(2772 - x);
	return (0);
}
