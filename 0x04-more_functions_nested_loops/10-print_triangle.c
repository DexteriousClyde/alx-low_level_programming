#include "main.h"

/**
 * print_triangle - main code
 * @size: input
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int x;

	x = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j >= x)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		x--;
		_putchar('\n');
	}
}
