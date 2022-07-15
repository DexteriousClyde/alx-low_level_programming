#include "lists.h"
#include <stdio.h>

/**
 * list_len - main function
 * @h: pointer
 * Return: num
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h -> next;
		i++;
	}
	return (i);
}
