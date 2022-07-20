#include "lists.h"

/**
 * delete_nodeint_at_index - man
 * @head: pointer
 * @index: int
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cpy, *node;
	unsigned int i;

	cpy = *head;
	node = NULL;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (cpy == NULL || cpy->next == NULL)
			return (-1);
		cpy = cpy->next;
	}
	node = cpy->next;
	cpy->next = node->next;
	free(node);
	return (1);
}
