#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - function
 * @n: int
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list li;

	va_start(li, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(li, unsigned int);
	}
	va_end(li);
	return (sum);
}
