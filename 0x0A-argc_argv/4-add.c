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
		if (argc < 3 || (argc[i] > '0' && argc[i] < '9'))
		{
			printf("ERROR\n");
			return (1);
		}
		else
		{
			sum += atoi(argc[i]);
	}
	printf("%d\n", sum);
	return (0);
}
