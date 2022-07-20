#include "lists.h"

/**
 * insert_nodeint_at_index - main
 * @head: pointer
 * @idx: int
 * @n: in
 * Return: list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, cpy;

	cpy = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL || head == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (i = 0; cpy != NULL && i < idx; i++)
	{
		if (i == idx - 1)
		{
			node->next = cpy->next;
			cpy->next = node;
			return (node);
		}
		else
		{
			cpy = cpy->next
		}
	}
	return (NULL);
}
