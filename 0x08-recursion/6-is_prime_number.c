#include "main.h"

/**
 * check_prime - alt
 * @i: int input
 * @j: int
 * Return: int
 */

int check_prime(int i, int j)
{
	if (j < 2 || j % i == 0)
	{
		return (0);
	}
	else if (i == j / 2)
	{
		return (1);
	}
	else
	{
		return (check_prime(i + 1, j));
	}
}

/**
 * is_prime_number - main
 * @n: int input
 * Return: int
 */

int is_prime_number(int n)
{
	return (check_prime(2, n));
}
