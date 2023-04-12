#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int x, l1, l2, l3;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l1 = 0;
	while (*(s1 + l1) != '\0')
	{
		l1++;
	}

	l2 = 0;
	while (*(s2 + l2) != '\0')
	{
		l2++;
	}

	l3 = l1 + l2;

	a = (char *) malloc(l3 * sizeof(char) + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < l1; x++)
		a[x] = s1[x];
	for (x = 0; x < l2; x++)
		a[x + l1] = s2[x];

	return (a);
}
