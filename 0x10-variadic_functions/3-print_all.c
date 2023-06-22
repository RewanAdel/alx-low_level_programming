#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	int x;
	int flag;
	char *string;
	va_list list;

	va_start(list, format);
	x = 0;
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				flag = 0;
				break;
			case 's':
				string = va_arg(list, char*);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[x + 1] != '\0' && flag == 0)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(list);
}
