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

	j = 0;
	while (s != '\0')
	{
		s++;
		j++;
	}
	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
