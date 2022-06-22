#include "main.h"

/**
 * is_prime_number - main
 * @n: int input
 * Return: int
 */

int is_prime_number(int n)
{
	return check_prime(2, n);
}

/**
 * check_prime - alt
 * @i: int input
 * @j: int
 * Return: int
 */

int check_prime(int i, int j)
{
	if(j < 2 || j % i == 0)
	{
		return (0);
	}
	else if (i == j)
	{
		return (1);
	}
	else
	{
		return (check_prime(i++, j));
	}
}