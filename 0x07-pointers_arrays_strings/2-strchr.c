#include "main.h"

/**
 * _strchr - main code
 * @s: pointer
 * @c: character
 * Return: null or pointer of c
 */

char *_strchr(char *s, char c)
{
	int i;
	
	i = 0;
	while (*(s + i) != NULL)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
