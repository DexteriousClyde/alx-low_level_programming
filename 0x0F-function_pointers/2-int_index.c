#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - funct
 * @array: pointer
 * @size: int
 * @cmp: pointer funct
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; ((array != NULL && cmp != NULL) && i < size); i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	return (-1);
}
