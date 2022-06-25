#include <stdio.h>

/**
 * main - code
 * @argc: intger
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	if (argc < 3)
	{
		printf("ERROR\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
