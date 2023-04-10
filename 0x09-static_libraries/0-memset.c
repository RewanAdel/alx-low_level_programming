#include "main.h"

/**
 * _memset - fills first bytes of memory area a constant byte
 *
 * @s: array points to bytes of the memory area
 * @b: constant byte
 * @n: number of bytes of the memory area
 *
 * Return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
