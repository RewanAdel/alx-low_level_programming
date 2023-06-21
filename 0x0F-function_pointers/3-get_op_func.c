#include "3-calc.h"

/**
 * get_op_func - select correct function to perform operation asked by user
 *
 * @s: operator (+, -, *, /, %)
 *
 * Return: selected function
 */

int (*get_op_func(char *s))(int, int)
{
	int x;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	x = 0;
	while (ops[x].op != NULL)
	{
		if (*ops[x].op == *s && s[1] == '\0')
		{
			return (ops[x].f);
		}
		x++;
	}
	return (NULL);
}
