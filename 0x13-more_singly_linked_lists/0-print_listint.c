#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - main
 * @h: pointer list
 * Return: num
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h -> n);
		h = h -> next;
		i++;
	}
	return (i);
}
