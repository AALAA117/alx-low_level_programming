#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#endif