#include "main.h"

/**
 * _pow_recursion - main recusive code
 * @x: input int
 * @y: int input
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (0);
	}
	else
	{
		return (x * _pow_recursion(x, y--));
	}
}
