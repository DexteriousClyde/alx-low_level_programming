#include "main.h"

/**
 * _strncpy - main code
 * @dest: pointer
 * @src: pointer
 * @n: number
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
