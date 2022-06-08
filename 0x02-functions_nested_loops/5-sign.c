#include "main.h"

/**
 * print_sign - main code
 * @n: input
 * Return: sign and 1 or -1
 */

int print_sign(int n)
{
	int i;
	char m;

	if (n == 0)
	{
		m = '0';
		i = 0;
	}
	else if (n > 0)
	{
		m = '+';
		i = 1;
	}
	else
	{
		m = '-';
		i = -1;
	}
	_putchar(m);
	return (i);
}
