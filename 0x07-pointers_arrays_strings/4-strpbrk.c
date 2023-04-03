#include "main.h"
#define NULL 0

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: source string
 *
 * Return: pointer to byte in @s that matches one of bytes in accept, or null
 */

char *_strpbrk(char *s, char *accept)
{
	for (;; s++)
	{
		if (*s == *accept)
			return (s);

		if (!*s)
			return (NULL);
	}
	return (NULL);
}

