#include "lists.h"

/**
 * reverse_listint - main
 * @head: pointer
 * Return: list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a, *b;

	a = NULL;
	b = NULL;
	while (*head != NULL)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}
	*head = a;
	return (*head);
}
