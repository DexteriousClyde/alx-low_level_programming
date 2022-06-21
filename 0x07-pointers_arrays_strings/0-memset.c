#include "main.h"

/**
 * _memset - main code
 * @s: pointer
 * @b: byte
 * @n: integer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
