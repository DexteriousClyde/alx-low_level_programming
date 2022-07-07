#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - funct
 * @array: pointer arr
 * @size: pointer
 * @action: point funct
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t start;

	if (array == NULL || action == NULL)
		return;
	else
	{
		for (start = 0; start < size; start++)
		{
			action(array[start]);
		}
	}
}
