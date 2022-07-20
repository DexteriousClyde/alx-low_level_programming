#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * add_nodeint_end - main
 * @head: list
 * @n: int
 * Return: int
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *h;

	h = *head;
	while (h != NULL && h->next != NULL)
	{
		h = h->next;
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	else
		h->next = node;
	return (node);
}
