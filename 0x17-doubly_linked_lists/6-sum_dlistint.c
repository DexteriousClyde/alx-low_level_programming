#include "lists.h"

/**
 * sum_dlistint - main
 * @head: pointer
 * Return: void
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int i;
	
	i = 0;
	temp = head;
	if (!head)
		return (0);
	while (temp != NULL)
	{
		i = temp->n;
		temp = temp->next;
	}
	return (i);
}
