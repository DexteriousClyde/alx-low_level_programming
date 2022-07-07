#include "function_pointers.h"
#include <sdtlib.h>
#include <stdio.h>

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
		for (start = 0; i < size; start++)
		{
			action(array[start]);
		}
	}
}
