#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: a C program prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 'A';

	while (x <= 'Z')
	{
		int lower_x = tolower(x);

		putchar(lower_x);
		x++;
	}
	putchar('\n');
	return (0);
}
