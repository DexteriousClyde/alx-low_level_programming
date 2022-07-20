#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_listint - main
 * @head:pointer
 * Rreturn: void
 */

void free_listint(listint_t *head)
{
	listint_t *i;

	while (head != NULL)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
