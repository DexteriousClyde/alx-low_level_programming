#include "main.h"

/**
 * print_diagonal - main code
 * @n: input
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
