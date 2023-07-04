#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node
 * Return:  a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	x = *head;
	*head = NULL;
	while (x)
	{
		next = x->next;
		x->next = *head;
		*head = x;
	x = next;
	}
	return (*head);
}
