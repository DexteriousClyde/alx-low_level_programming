#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_listint2 - main
 * @head:pointer
 * Rreturn: void
 */

void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		i = *head;
		*head = (*head)->next;
		free(i);
	}
}
