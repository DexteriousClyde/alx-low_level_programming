#include "lists.h"

/**
 * free_listint_safe - main
 * @h: header
 * Return: size
 */

size_t free_listint_safe(listint_t **h)
{
	size_t l;
	int sub;
	listint_t *cpy;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h != NULL)
	{
		sub = *h - (*h)->next;
		l++;
		if (sub > 0)
		{
			cpy = (*h)->next;
			free(*h);
			*h = cpy;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}
	*h = NULL;
	return (l);
}
