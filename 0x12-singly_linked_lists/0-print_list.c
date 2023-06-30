#include "lists.h"

/**
 * _strlen - returns a string lengt
 * @s: string to check
 * Return: string length
 */
int _strlen(char *s)
{
	int x = 0;

	if (!s)
		return (0);
	while (*s++)
		x++;
	return (x);
}

/**
 * print_list - prints all the elements of a list
 * @h: the linked list head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}
	return (x);
}
