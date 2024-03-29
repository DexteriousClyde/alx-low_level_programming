#include "lists.h"

/**
 * print_dlistint - main
 * @h: pointer
 * Return: void
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i;
	
	i = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
