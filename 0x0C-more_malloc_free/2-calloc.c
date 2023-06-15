#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of size bytes
 * @size: number of bytes
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;
	char *y;
	unsigned int z;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	x = malloc(size * nmemb);
	if (x == NULL)
	{
		return (NULL);
	}

	y = x;
	for (z = 0; z < nmemb * size; z++)
		y[z] = 0;
	return (x);
}
