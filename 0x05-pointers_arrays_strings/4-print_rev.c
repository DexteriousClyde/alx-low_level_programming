#include "main.h"

/**
 * print_rev - main code
 * @s: pointer
 * Return: void
 */

void print_rev(char *s)
{
	int j;
	int i;

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (j = j; j > 0; j--)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
