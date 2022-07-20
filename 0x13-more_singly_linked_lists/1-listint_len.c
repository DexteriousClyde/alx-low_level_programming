#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - main
 * @h: pointer list
 * Return: num
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
