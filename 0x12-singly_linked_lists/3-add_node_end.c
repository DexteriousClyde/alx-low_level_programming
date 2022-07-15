#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * add_node_end - main
 * @head: arrrr
 * @str: pointer
 * Return: lit=st
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *h;
	int count;

	h = *head;
	while (h != NULL && h -> next != NULL)
	{
		h = h -> next;
	}
	for (count = 0; str[count] != '\0'; count++)
		;
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node -> str = strdup(str);
	node -> len = count;
	node -> next = NULL;
	if (h)
		h -> next = node;
	else
		h = node;
	return (node);
}
