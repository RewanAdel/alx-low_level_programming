#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string from source input
 * @accept: source input
 *
 * Return: number of bytes in the initial segment of @s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int x;

	for (;; s++)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				n++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (n);
		}
	}
	return (n);
}

