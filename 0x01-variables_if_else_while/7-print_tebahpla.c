#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program prints alphabet in lowercase in reverse using for
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha[26] = "zyxwvutsrqponmlkjihgfedcba";
	int x;

	for (x = 0; x < 26; x++)
	{
		putchar(alpha[x]);
	}
	putchar('\n');
	return (0);
}
