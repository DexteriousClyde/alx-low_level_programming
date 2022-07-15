#include "lists.h"
#include <stdio.h>

/**
 * print_list - main function
 * @h: pointer
 * Return: num
 */

size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h -> str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h -> len, h -> str);
		}
		h = h -> next;
		i++;
	}
	return (i);
}
