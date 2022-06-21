#include "main.h"

/**
 * _memcpy - main code
 * @dest: pointer
 * @src: pointer
 * @n: integer
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
