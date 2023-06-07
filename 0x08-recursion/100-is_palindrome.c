#include "main.h"

int check_pal(char *s, int x, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks strings palindrome
 * @s: string to reverse
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - shows the length of a string
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks characters recursively for palindrome
 * @s: string
 * @x: iterator
 * @l: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int x, int l)
{
	if (*(s + x) != *(s + l - 1))
		return (0);
	if (x >= l)
		return (1);
	return (check_pal(s, x + 1, l - 1));
}
