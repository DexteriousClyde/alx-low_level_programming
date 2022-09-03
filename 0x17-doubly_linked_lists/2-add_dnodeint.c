#include "lists.h"

/**
 * add_dnodeint - main
 * @head: head
 * @n: n
 * Return: 0
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *t;

	t = malloc(sizeof(dlistint_t));
	if (t == NULL)
		return (NULL);
	t->n = n;
	t->prev = NULL;
	t->next = NULL;
	if (*head == NULL)
	{
		*head = t;
	}
	else
	{
		t->next = *head;
		(*head)->prev = t;
		*head = t;
	}
	return (t);
	free(t);
}
