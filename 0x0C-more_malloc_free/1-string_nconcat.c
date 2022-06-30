#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sizes - func
 * @s: pointer
 * Return: num
 */

int sizes(char *s)
{
	int len;
	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}

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
	unsigned int i, j1, k2;
	
	i = 0;
	if (s1 == NULL)
		j1 = 0;
	else
		j1 = sizes(s1);
	if (s2 == NULL)
		k2 = 0;
	else
		k2 = sizes(s2);
	if (k2 > n)
		arr = malloc(j1 + 1 + (n * sizeof(char)));
	else
		arr = malloc(k2 + j1 + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < j1 + k2; i++)
	{
		if (i < j1)
			arr[i] = s1[i];
		else
		{
			if(n < k2 && i - j1 >= n)
				break;
			arr[i] = s2[i-j1];
		}
	}
	arr[i] = '\0';
	return (arr);
}
