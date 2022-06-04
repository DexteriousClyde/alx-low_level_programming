#include <stdio.h>

/**
 * main - main running code
u * Return: 0
 */

int main(void)
{
	int letter;

	for (letter = 0; letter <= 9; letter++)
	{
		putchar(letter + 48);
		if (letter < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
