#include "main.h"
#define NULL 0

/**
 * _strstr - locates a substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to byte in @s that matches one of bytes in accept, or null
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

	       while (*x == *y && *y != '\0')
	       {
		       x++;
		       y++;
	       }
	       if (*y == '\0')
		       return (haystack);
	}
	return (NULL);
}

