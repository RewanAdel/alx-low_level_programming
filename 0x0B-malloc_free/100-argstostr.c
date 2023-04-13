#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: width of grid
 * @av: height of grid
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *x;
	int y = 0, a1 = 0, a2 = 0, a3 = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (a1 < ac)
	{
		a2 = 0;
		while (av[a1][a2] != '\0')
		{
			y++;
			a2++;
		}
		a1++;
	}
	y = y + ac + 1;
	x = malloc(sizeof(char) * y);

	if (x == NULL)
	{
		return (NULL);
	}
	for (a1 = 0; a1 < ac; a1++)
	{
		for (a2 = 0; av[a1][a2] != '\0'; a2++)
		{
			x[a3] = av[a1][a2];
			a3++;
		}
		x[a3] = '\n';
		a3++;
	}
	return (x);
}
