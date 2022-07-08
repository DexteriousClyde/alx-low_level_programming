#include <stdarg.h>
#include "variadic_functions.h"

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
	for (i = n; i >= 0; i = va_arg(li, unsigned int))
	{
		sum = sum + i;
	}
	va_end(li);
	return (sum);
}
