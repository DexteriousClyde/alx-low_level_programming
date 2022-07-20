#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_nodeint_at_index - main
 * @head: lists
 * @index: int
 * Return: void
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t copy;
	unsigned int ans;

	copy = head;
	if (head == NULL)
		return (0);
	for (ans = 0; ans < index; ans++)
	{
		copy = copy->next;
		if(copy == NULL)
			return (0);
	}
	return (copy);
}
