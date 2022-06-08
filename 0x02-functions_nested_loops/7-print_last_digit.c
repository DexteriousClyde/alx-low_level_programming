#include "main.h"

/**
 * print_last_digit - main code
 * @n: input
 * Return: n
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
