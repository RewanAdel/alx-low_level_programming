#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}
