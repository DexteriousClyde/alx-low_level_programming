#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - function
 * @s1: pointer
 * @s2: pointer
 * @n: int
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	int i;

	i = 0;
	j = 0;
	arr = malloc();
	if (arr == NULL)
		return (NULL);
	while (s1[i] != '\0' s2 != '\0')
	{
		if (s1[i] != '\0')
		{
			arr[i] = s1[i];
		}
		else
		{
			if (s2[j] != '\0')
			{
				arr[i] = s2[j];
				j++;
			}
		}
		i++;
	}
	return (arr);
}
