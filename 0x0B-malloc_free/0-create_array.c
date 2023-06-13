#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes with specific char
 *
 * @size: size of array
 * @c: char to initialize array
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *a;

	a = (char *) malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}

	if (size != 0)
	{
		for (x = 0; x < size; x++)
		{
			*(a + x) = c;
		}
		return (a);
	}
	else
	{
		return (NULL);
	}
}
