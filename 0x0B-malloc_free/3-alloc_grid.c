#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - function
 * @width: int
 * @height: int
 * Return: 0 or mem
 */

int **alloc_grid(int width, int height)
{
	int *ar, x, y;

	ar = malloc(sizeof(*ar) * height);
	if (ar == 0 || width == 0 || height == 0)
	{
		return (NULL);
	}
	for (y = 0; y < height; y++)
	{
		ar[y] = malloc(sizeof(**arr) * width);
		if (ar == NULL)
		{
			return (NULL);
		}
		for (x = 0; x < width; x++)
		{
			ar[y][x] = 0;
		}
	}
	return (ar);
}
