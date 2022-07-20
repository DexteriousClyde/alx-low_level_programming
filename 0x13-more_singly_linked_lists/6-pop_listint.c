#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * pop_listint - main
 * @head: lists
 * Return: void
 */

int pop_listint(listint_t **head)
{
	listint_t copy;
	int ans;

	copy = *head;
	if (head == NULL || *head == NULL)
		return (0);
	ans = *head->n;
	*head = copy->next;
	free(copy);
	return (ans);
}
