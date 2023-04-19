#include "function_pointers.h"

/**
 * array_iterator - execute function given as parameter on array each element
 *
 * @array: array to execute function on
 * @size: size of the array
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
