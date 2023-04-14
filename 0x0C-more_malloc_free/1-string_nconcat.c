#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first input string
 * @s2: second input string
 * @n: bytes
 *
 * Return: a pointer points to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int v1 = 0, v2 = 0, y;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[v1] != '\0')
	{
		v1++;
	}

	while (s2[v2] != '\0')
	{
		v2++;
	}

	if (n > v2)
		n = v2;
	x = malloc((v1 + n + 1) * sizeof(char));

	if (x == NULL)
		return (0);

	for (y = 0; y < v1; y++)
	{
		x[y] = s1[y];
	}

	for (; y < (v1 + n); y++)
	{
		x[y] = s2[y - v1];
	}
	x[y] = '\0';

	return (x);
}
