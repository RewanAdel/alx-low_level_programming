#include "main.h"

/**
 * rev_string - reverses string
 *
 * @s: string to print
 *
 * Return: void
 */

void rev_string(char *s)
{
	int m, n;
	char t;

	for (m = 0; s[m] != '\0'; ++m)
		;

	for (n = 0; n < m / 2; n++)
	{
		t = s[n];
		s[n] = s[m - 1 - n];
		s[m - 1 - n] = t;
	}
}
