#include <stdlib.h>
#include <stdio.h>

/**
 * sizes - function
 * @word: string
 * Return: num
 */

int sizes(char *s)
{
	int a, j;

	a = 0;
	for (j = 0; s1[j] != '\0'; j++)
	{
		a += 1;
	}
	return (a);
}



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

	if (s1 == NULL)
		size1 = 0;
	else
		size1 = sizes(s1);
	if (s2 == NULL)
		size2 = 0;
	else
		size2 = sizes(s2);
	ar = malloc((size1 * sizeof(*s1)) + (size2 * sizeof(*s2)) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size1 + size2; i++)
	{
		if (i < size1)
			ar[i] = s1[i];
		else
			ar[i] = s2[i - size1];
	}
	ar[i] = '\0';
	return (ar);
}
