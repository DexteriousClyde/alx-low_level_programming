#include "main.h"

/**
 * jack_bauer - main code
 * Return: void
 */

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(h + '0');
			_putchar(':');
			_putchar(m + '0');
			_putchar('\n');
		}
	}
}
