#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - functions
 * @separator: pointer
 * @n: int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;

	va_start(li, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(li, int));
		if (i < (n - 1) && separator != NULL)
			print("%s", separator);
	}
	va_end(li);
	printf("\n");
}
