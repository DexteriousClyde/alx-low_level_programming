#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - code
 * @argc: intger
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("ERROR\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
