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
	int *ar;
       
	ar = malloc(b);
	if (ar == NULL)
	{
		exit(98);
	}
	return (ar);
}
