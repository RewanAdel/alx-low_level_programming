#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer to the first node
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next_node, *pre_node;
	unsigned int x = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		next_node = *head;
		*head = (*head)->next;
		free(next_node);
		return (1);
	}
	next_node = *head;
	while (next_node)
	{
		if (x == index)
		{
			pre_node->next = next_node->next;
			free(next_node);
			return (1);
		}
		x++;
		pre_node = next_node;
		next_node = next_node->next;
	}
	return (-1);
}
