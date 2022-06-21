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
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
