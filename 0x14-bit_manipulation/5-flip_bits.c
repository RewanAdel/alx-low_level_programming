#include "main.h"

/**
 * flip_bits - flips the number of bits to get from one number to another
 * @n: unsigned long int number one
 * @m: unsigned long int number two
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_number;

	for (bits_number = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits_number++;
	}
	return (bits_number);
}
