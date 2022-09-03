#include "lists.h"

/**
 * get_dnodeint_at_index - main
 * @head: pointer
 * @index: int
 * Return: void
 */



dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;
	
	i = 0;
	temp = head;
	if (!head)
		return (NULL);
	while (i < index)
	{
		temp = temp->next;
		i++;
		if (!temp)
			return (NULL);
	}
	return (temp);
}
