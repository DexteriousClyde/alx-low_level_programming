#include "main.h"
#include <stdio.h>

/**
 * print_diagsum - main code to run it all
 * @a: pointer integer
 * @size: number
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i + (i * size)];
		sum2 += a[(size - i - 1) + (i * size)];
	}
	printf("%d, %d\n", sum1, sum2);
}
