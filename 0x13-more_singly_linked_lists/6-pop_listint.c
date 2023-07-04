#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list, returns its data
 * @head: pointer to the first node address
 * Return: head node’s data (n) or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
