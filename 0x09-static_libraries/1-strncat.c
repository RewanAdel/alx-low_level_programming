#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination char
 * @src: source char
 * @n: number of bytes from @src
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int y, x;

	y = 0;

	while (dest[y])
	{
		y++;
	}
	for (x = 0 ; x < n && src[x] != '\0' ; x++)
		dest[y + x] = src[x];

	dest[y + x] = '\0';

	return (dest);
}
