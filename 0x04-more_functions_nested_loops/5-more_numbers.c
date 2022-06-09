#include "main.h"

/**
 * more_numbers - main code
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;
	int n;
	
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			n = i;
			if (i > 9)
			{
				_putchar('1');
				n = n % 10;
			}
			
			_putchar('0' + n);
		}
	_putchar('\n');
	}
}
