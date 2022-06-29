#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - function
 * @s1: pointer
 * @s2: pointer2
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *ar;

	size1 = 0;
	size2 = 0;
	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		size1 += 1;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		size2 += 1;
	}
	ar = malloc((size1 * sizeof(*s1)) + (size2 * sizeof(*s2)) + 1);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ar[i] = s1[i];
	}
	for (i = i; s2[i - size1] != '\0'; i++)
	{
		ar[i] = s2[i - size1];
	}
	ar[i + size1] = '\0';
	return (ar);
}
