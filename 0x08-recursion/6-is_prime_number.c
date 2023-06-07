#include "main.h"

int check_int(int n, int x);

/**
 * is_prime_number - returns 1 if input integer is prime number if not return 0
 *
 * @n: input number
 *
 * Return: 1 if input integer is prime number if not return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_int(n, n - 1));
}

/**
 * check_int - finds if the input is prime number or not
 *
 * @n: input number
 * @x: copy of input number
 *
 * Return: 1 if input integer is prime number if not return 0
 */

int check_int(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0 && x > 0)
	{
		return (0);
	}
	return (check_int(n, x - 1));
}
