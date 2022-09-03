#include "lists.h"

/**
 * add_dnodeint_end - main
 * @head: head
 * @n: n
 * Return: 0
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t, te;

	t = malloc(sizeof(dlistint_t));
	if (t == NULL)
		return (NULL);
	t->n = n;
	te = *head;
	t->next = NULL;
	if (*head == NULL)
	{
		t->prev = NULL;
		*head = t;
		return (t);
	}
	while (te->next )
	{
		te = te->next;
	}
	te->next = t;
	t->prev = te;
	return (t);
}
