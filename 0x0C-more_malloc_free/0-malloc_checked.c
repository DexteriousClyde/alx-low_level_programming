#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function
 * @b: int
 * Return: mem address
 */

void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
