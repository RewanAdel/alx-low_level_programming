#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the first node of the list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	while (head)
	{
		x = head;
		head = head->next;
		free(x);
	}
}
