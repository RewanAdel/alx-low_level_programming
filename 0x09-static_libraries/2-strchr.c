#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 * @c: character to search
 *
 * Return: pointer to the first occurrence of the character in @s, or null
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);

		if (!*s)
			return (NULL);
	}
	return (NULL);
}
