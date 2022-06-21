#include "main.h"

/**
 * _strchr - main code
 * @s: pointer
 * @c: character
 * Return: null or pointer of c
 */

char *_strchr(char *s, char c)
{
	while (*s != NULL)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
