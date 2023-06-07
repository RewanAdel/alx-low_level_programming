#include "main.h"

int check_int(int n, int x);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: input number
 *
 * Return: natural square root or returns -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (check_int(n, 0));
}

/**
 * check_int - returns the natural square root of a number
 *
 * @n: input number
 * @x: fine square root
 *
 * Return: natural square root or returns -1
 */

int check_int(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (check_int(n, x + 1));
}
