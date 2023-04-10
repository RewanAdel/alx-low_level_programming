#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x = 0;
	char *r;

	while (--argc)
	{
		for (r = argv[argc]; *r; r++)
		{
			if (*r < '0' || *r > '9')
				return (printf("Error\n"), 1);
		}
		x += atoi(argv[argc]);
	}
	printf("%d\n", x);
	return (0);
}
