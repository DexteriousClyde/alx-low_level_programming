#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - functions
 * @separator: pointer
 * @n: int
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;
	char *word;

	va_start(li, n);
	for (i = 0; i < n; i++)
	{
		word = va_arg(li, char*);
		if (word == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", word);
			if (i < (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(li);
	printf("\n");
}
