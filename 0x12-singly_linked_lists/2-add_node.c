#include "lists.h"

/**
 * add_node - adds a new node at the beginning of alist
 * @head: linked list head
 * @str: string to be duplicated
 * Return: address of the new element or null
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node)
	{
		if (strdup(str) == NULL)
		{
			return (NULL);
			free(new_node);
		}
		while (str[len])
			len++;

		new_node->str = strdup(str);
		new_node->next = *head;
		new_node->len = len;

		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
