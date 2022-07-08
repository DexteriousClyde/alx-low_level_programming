#include <stdarg.h>
#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int _putchar(char c_);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type -funct
 * @ka: pointer
 * @fl: pointer funct
 */

typedef struct type
{
	char *ka;
	void (*fl)(va_list);
} type_t;

#endif
