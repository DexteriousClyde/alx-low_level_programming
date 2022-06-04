#include <stdio.h>

/**
 * main - main running code
 * Return: 0
 */

int main(void)
{
	int letter;

	for (letter = 0; letter <= 9; letter++)
	{
		putchar(48 + letter);
	}
	putchar('\n');
	return (0);
}
