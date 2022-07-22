#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_to_uint - main
 * @b: string
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n;

	n = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		else
			n = 2 * n + (b[i] - '0');
	}
	return (n);
}
