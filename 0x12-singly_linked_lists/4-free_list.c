#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * free_list - main
 * @head: hhead
 * Return: void
 */

void free_list(list_t *head)
{
	list_t i;

	while (head != NULL)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
