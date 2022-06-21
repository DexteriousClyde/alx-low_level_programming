#include "main.h"

/**
 * _strstr - main code running uit all
 * @haystack: pointer for where to look
 * @needle:  pointer we looking for
 * Return: pointer of start of needle
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b, c;

	a = 0;
	b = 0;
	c = 0;
	for (a = 0; haystack[a]; a++)
	{
		for (b = 0; needle[b] && haystack[a] == needle[0]; b++)
			if (needle[b] == haystack[a + b])
			{
				continue;
			}
			else
			{
				break;
			}
		if (needle[b])
		{
			continue;
		}
		else
		{
			return (haystack + a);
		}
	}
	return (0);
}
