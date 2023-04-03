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
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return (NULL);
}

