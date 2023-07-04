#include "lists.h"

/**
 * sum_listint - returns the sum of all a linked list data(n)
 * @head: pointer to the first node
 * Return: sum of all data or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
