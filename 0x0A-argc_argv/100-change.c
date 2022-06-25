#include <stdio.h>
#include <stdlib.h>

/**
 * main - code
 * @argc: intger
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int ans;

	if (argc != 2)
	{
		printf("ERROR\n");
		return (1);
	}
	a = atoi(argv[argc-1]);
	if (a == 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	ans = 0;
	while (a > 0)
	{
		if (a - 25 >= 0)
		{
			ans += 1;
			a -= 25;
		}
		else if (a - 10 >= 0)
		{
			ans += 1;
			a -= 10;
		}
		else if (a - 5 >= 0)
		{
			ans += 1;
			a -= 5;
		}
		else if (a - 2 >= 0)
		{
			ans += 1;
			a -= 2;
		}
		else if (1)
		{
			ans += 1;
			a -= 1;
		}
	}
	
	
	printf("%d\n", ans);
	return (0);
}
