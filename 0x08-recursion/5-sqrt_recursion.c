#include "main.h"

/**
 * _sqrt_recursion - main recursive code
 * @n: input int
 * Return: sqrt int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
		return (check(1, n));
}

/**
 * check - main
 * @i: int
 * @j: num input
 * Return: int
 */

int check(int i, int j)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return check(i++, n);
	}
	else
	{
		return (-1);
	}
}
