#include "lists.h"

/**
 * sum_listint - main
 * @head: pointer
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *cpy;

	sum = 0;
	cpy = head;
	while (cpy != NULL)
	{
		sum += cpy->n;
		cpy = cpy->next;
	}
	return (sum);
}
