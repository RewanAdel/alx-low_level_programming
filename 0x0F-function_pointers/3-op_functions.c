#include "3-calc.h"

/**
 * op_add - sum of two numbers
 * @a: first number
 * @b: second number
 * Return: sum result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of two numbers
 * @a: first number
 * @b: second number
 * Return: subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two numbers
 * @a: first number
 * @b: second number
 * Return: multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: dividend number
 * @b: divisor number
 * Return: division result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo operation
 * @a: first number
 * @b: second number
 * Return: modulo operation result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
