#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - function
 * @str: pointer
 * Return: 0
 */

char *_strdup(char *str)
{
	int i, s;
	char *ar;

	if (str == NULL)
	{
		return (NULL);
	}
	s = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		s += 1;
	}
	ar = malloc(s * (sizeof(*str)) + 1);
	if (ar == NULL || *str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ar[i] = str[i];
	}
	ar[i] = '\0';
	return (ar);
}
