#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function
 * @n: int
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list li;
	unsigned int i, sum;
	
	va_start(li, n);
	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(li, int);
	}
	va_end(li);
	return (sum);
}
