#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * add_node - main funct
 * @head: array
 * @str: string
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int strlen;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	for (strlen = 0; str[strlen] != '\0'; strlen++)
		;
	node -> str = strdup(str);
	node -> len = strlen;
	node -> next = *head;
	*head = node;
	return (node);
}
