#include "main.h"

/**
 * get_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long int number
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
