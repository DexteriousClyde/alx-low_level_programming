#include "main.h"

/**
 * _puts_recursion - main code runnning recursion
 * @s: pointer input
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
}
