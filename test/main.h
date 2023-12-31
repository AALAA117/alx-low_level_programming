#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct specifier - handle conversion specifiers
 * @sp:..
 * @f:..
 */
typedef struct specifier
{
	char *sp;
	int (*f)(va_list);
} sp_t;
int _printf(const char *format, ...);
int _printf_char(va_list args);
int _printf_str(va_list args);
int _printf_percent(va_list args __attribute__((unused)));
#endif
