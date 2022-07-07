#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - funct
 * @name: pointer
 * @f: pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	else
		f(name);
}
