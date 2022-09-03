#include "lists.h"

/**
 * free_dlistint - main
 * @head: pointer
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	size_t i;
	
	i = 0;
	(void) i;
	while (temp != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
