#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: a C program that prints with write function
 *
 * Return: 1 (Error)
 */

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quote, 59);
	return (1);
}
