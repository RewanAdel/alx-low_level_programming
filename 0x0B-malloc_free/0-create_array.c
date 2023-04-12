#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars, and initializes with a specific char
 *
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = (char*) malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(a + i) = c;
		}
		return (a);
	}
	else
	{
		return (NULL);
	}
}
