#include "main.h"

/**
 * _isupper - main code
 * @c: input
 * Return: 1 or 0
 */

int _isupper(int c)
{
	int i;

	i = 0;
	if (c > 64 && c < 91)
	{
		i = 1;
	}

	return (i);
}
