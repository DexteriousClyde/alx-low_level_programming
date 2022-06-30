#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc -fiunc
 * @ptr: pointer
 * @old_size: int
 * @new_size: int
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ar, *arr;
	unsigned int i;

	if(ptr != NULL)
	{
		ar = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return(0);
	}
	arr = malloc(new_size);
	if (arr == NULL || arr == 0)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		arr[i] = ar[i];
	}
	free(ptr);
	return (arr);
}
