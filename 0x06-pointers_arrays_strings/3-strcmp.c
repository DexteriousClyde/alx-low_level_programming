#include "main.h"

/**
 * _strcmp - main code
 * @s1: pointer
 * @s2: pintere
 * Return: 0 or mismatch
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
