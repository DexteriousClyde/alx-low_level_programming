#include <stdio.h>

/**
 * main - code
 * @argc: intger
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	if (argc < 3)
	{
		printf("ERROR\n");
		return (1);
	}
	printf("%d\n", (int)argc[1] * (int)argc[2]);
	return (0);
}
