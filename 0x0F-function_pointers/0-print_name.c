#include "function_pointers.h"

/**
 * print_name - print a name
 *
 * @name: input name
 * @f: function of the name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
