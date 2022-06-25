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
	int i;
	int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (argv[i] < '0' || argv[i] > '9')
		{
			printf("ERROR\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
