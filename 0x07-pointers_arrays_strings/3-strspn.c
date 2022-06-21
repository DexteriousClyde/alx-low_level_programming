#include "main.h"

/**
 * _strspn - main
 * @s: pointer
 * @accept: point
 * Return: num bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, ans;
	
	ans = 0;
	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				ans++;
			}
		}
	}
	return (ans);
}
