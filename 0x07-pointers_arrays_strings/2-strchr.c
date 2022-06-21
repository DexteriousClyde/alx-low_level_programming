#include "main.h"

/**
 * _strchr - main code
 * @s: pointer
 * @c: char
 * Return: 0 or pointer
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
	if (s[i] == c)
	{
		return (s + i);
	}
	return ('\0');
}
