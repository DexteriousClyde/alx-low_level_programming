#include "main.h"

/**
 * _strspn - main
 * @s: pointer
 * @accept: point
 * Return: num bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, ans;

	a = 0;
	ans = 0
	b = 0;
	while (s[a])
	{
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				ans++;
				break;
			}
			b++;
		}
		a++;
	}
	return (ans);
}
