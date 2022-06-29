#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function
 * @grid: array
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;
	
	for (i = 0; i < height; i++)P
	{
		free(grid[i]);
	}
	free(grid);
}
