#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *x, y = 0, z = min;

	if (min > max)
	{
		return (0);
	}
	x = malloc((max - min + 1) * sizeof(int));

	if (!x)
		return (0);
	while (y <= max - min)
		x[y++] = z++;

	return (x);
}
