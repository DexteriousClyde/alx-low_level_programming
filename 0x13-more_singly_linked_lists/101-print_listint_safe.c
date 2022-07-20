#include "lists.h"

/**
 * print_listsint_safe - main
 * @head: pointer
 * Return: size
 */

size_t print_listint_safe(const listint_t *head)
{
	long int a;
	size_t i;

	for (i = 0; head != NULL; i++)
	{
		a = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		if (a > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (i);
}
