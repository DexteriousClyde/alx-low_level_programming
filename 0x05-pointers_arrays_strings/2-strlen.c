#include "main.h"

/**
 * _strlen - main code
 * @s: pointer
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
