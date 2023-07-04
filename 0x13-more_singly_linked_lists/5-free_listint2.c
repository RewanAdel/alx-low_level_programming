#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to the address of the first node of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
		return;

	while (*head)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
	head = NULL;
}
