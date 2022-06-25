#include <stdio.h>

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
	(void)argc;
	for (i = 0; i < argc; i++)
	{
		if (argc < 3 || (argv[i] > '0' && argv[i] < '9'))
		{
			printf("ERROR\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
