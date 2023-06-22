#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list parameter;
	int sum;
	unsigned int x;

	if (n == 0)
		return (0);

	va_start(parameter, n);
	sum = 0;
	for (x = 0; x < n; x++)
	{
		sum += va_arg(parameter, int);
	}
	va_end(parameter);

	return (sum);
}
