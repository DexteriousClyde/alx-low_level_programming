#include "main.h"

/**
 * reverse_array - main code
 * @a: pointer
 * @n: number of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i];
		a[n - i] = j;
	}
}
