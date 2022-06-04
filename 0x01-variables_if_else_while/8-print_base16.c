#include <stdio.h>

/**
 * main - main running code
u * Return: 0
 */

int main(void)
{
	int letter;
	char a;

	for (letter = 0; letter <= 9; letter++)
	{
		putchar(letter + 48);
	}
	for (a = 'a'; a < 'g'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
