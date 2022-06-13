#include "main.h"

/**
 * puts_half - main code
 * @str: pointer
 * Return: void
 */

void puts_half(char *str)
{
	int j;
	int i;

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}
	i = j;
	for (j = i / 2; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
