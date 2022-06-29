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
		size1 = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			size1 += 1;
		}
	}
	if (s2 == NULL)
	{
		continue;
	}
	else
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			size2 += 1;
		}
	}
	ar = malloc((size1 * sizeof(*s1)) + (size2 * sizeof(*s2)) + 1);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1 + size2; i++)
	{
		if (i < size1)
		{
			ar[i] = s1[i];
		}
		else
		{
			ar[i] = s2[i - size1];
		}
	}
	ar[i] = '\0';
	return (ar);
}
