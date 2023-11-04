#ifndef MAIN_H
#define MAIN_H
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *_memset(void *p, int c, unsigned int len);
void *_memcpy(void *dest, const void *src, unsigned int size);
int _putchar(char c);
void digit(int n);
#endif
