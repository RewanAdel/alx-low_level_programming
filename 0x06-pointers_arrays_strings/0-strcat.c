#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: a pointer to the destination
 * @src: a pointer to the source
 *
 * Return: a pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int n, x;

	n = 0;

	while (dest[n])
	{
		n++;
	}
	for (x = 0 ; src[x] ; x++)
		dest[n++] = src[x];

	return (dest);
}
