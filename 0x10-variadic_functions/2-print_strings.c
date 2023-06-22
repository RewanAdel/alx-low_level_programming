#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings
 * @separator:  string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: 0 Always (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int x;
	va_list a;

	va_start(a, n);
	if (separator == NULL)
		separator = "";

	for (x = 0; x < n; x++)
	{
		string = va_arg(a, char*);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
