#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * i - funct
 * @list: li
 * Return: void
 */

void i(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * c - func
 * @list: li
 * Return: void
 */

void c(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * f - funct
 * @list: li
 * Return: void
 */

void f(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * s - funct
 * @list: li
 * Return: void
 */

void s(va_list list)
{
	char *c;
	
	c = va_arg(list, char *);
	if (c == NULL)
		printf("(nil)");
	else
		printf("%s", c);
}

/**
 * print_all - funct
 * @format: pointer
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list li;
	int i,j;
	char *gh;

	vari v[] = {
		{"c", c},
		{"i", i},
		{"s", s},
		{"f", f},
		{NULL, NULL}
	};

	va_start(li, format);
	i = 0;
	gh = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while(j < 4)
		{
			if (format[i] == *(v[j]).op)
			{
				print("%s", gh);
				v[j].f.(li);
				gh = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(li);
	printf("\n");
}
