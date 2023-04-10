#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: comparing
 */

int _strcmp(char *s1, char *s2)
{
	int comparing = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			comparing = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (comparing);
}
