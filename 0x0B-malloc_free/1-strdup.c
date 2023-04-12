#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: pointer to newly allocated space in memory, NULL if str = NULL
 */

char *_strdup(char *str)
{
	int l, x;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}

	l = 0;
	while (*(str + l) != '\0')
	{
		l++;
	}

	a = malloc(l * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < l; x++)
	{
		a[x] = str[x];
	}
	a[x] = '\0';

	return (a);
}
