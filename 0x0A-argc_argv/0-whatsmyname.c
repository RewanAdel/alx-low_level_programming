#include "main.h"
#include <stdio.h>

/**
 * main - prints the program name
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
