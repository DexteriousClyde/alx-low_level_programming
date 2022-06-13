#include "main.h"

/**
 * print_rev - main code
 * @s: pointer
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int j;
	int l;

	l = 0;
	j = 0;
	while (s[l] != '\0')
	{
		s++;
		j++;
		l++;
	}
	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
