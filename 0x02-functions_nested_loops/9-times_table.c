#include "main.h"

/**
 * time_table - main
 * Return: void
 */

void times_table(void)
{
	int n;
	int x;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			n = x * y;
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
