#include "main.h"
#include <stdlib>
#include <stdio.h>

/**
 * array_range - func
 * @min: int
 * @max: int
 * Return: int
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*arr) * ((max - min) + 1));
	if (arr == NULL || arr == 0)
	{
		return (NULL);
	}
	for (i = 0; (min + i) <= max; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
