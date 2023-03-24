#include "main.h"

/**
 * print_number - Prints an integer
 *
 * @n: The integer to be printed
*/

void print_number(int n)
{
	unsigned int x = n;

	/*first check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}

	/*print the first few digits*/
	if ((x / 10) > 0)
		print_number(x / 10);

	/*print the last digit*/
	_putchar((x % 10) + 48);
}
