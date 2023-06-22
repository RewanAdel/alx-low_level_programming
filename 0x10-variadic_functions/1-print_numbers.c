#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 * Return:0 Always (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list a;

	va_start(a, n);

	if (separator == NULL)
		separator = "";

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(a, int));
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
