#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: list index where the new node should be added
 * @n: the new node
 * Return:  address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *mirror = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = mirror;
		*head = new_node;
		return (new_node);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (mirror == NULL || mirror->next == NULL)
			return (NULL);
		mirror = mirror->next;
	}
	new_node->next = mirror->next;
	mirror->next = new_node;

	return (new_node);
}
