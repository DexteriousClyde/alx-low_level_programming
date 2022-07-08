#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * innt - funct
 * @list: li
 * Return: void
 */

void innt(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * chr - func
 * @list: li
 * Return: void
 */

void chr(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * flt - funct
 * @list: li
 * Return: void
 */

void flt(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * str - funct
 * @list: li
 * Return: void
 */

void str(va_list list)
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

	type_t vari[] = {
		{"c", chr},
		{"i", innt},
		{"s", str},
		{"f", flt},
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
			if (format[i] == *(vari[j]).ka)
			{
				printf("%s", gh);
				vari[j].fl(li);
				gh = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(li);
	printf("\n");
}
