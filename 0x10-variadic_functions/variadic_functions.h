#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
/**
 * struct op - check the code
 * @n:..
 * @f:..
 */
typedef struct op
{
	char *n;
	void (*f)(char *, va_list);
} op_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
