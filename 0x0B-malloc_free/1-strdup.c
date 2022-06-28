#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function
 * @str: pointer
 * return: null or memory address
 */

char *_strdup(char *str)
{
	int i;
	char *ar;

	if (str == NULL)
	{
		return (NULL);
	}
	ar = malloc(sizeof(*str) + 1);
	for (i = 0; str[i] != '\0'; i++)
	{
		ar[i] = str[i];
	}
	ar[i] = '\0';
	return (ar);
}
