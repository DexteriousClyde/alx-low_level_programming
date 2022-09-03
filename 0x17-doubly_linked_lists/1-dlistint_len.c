#include "lists.h"

/**
 * dlistint_len - main
 * @h: pointer
 * Return: void
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t i;
	
	i = 0;
	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
