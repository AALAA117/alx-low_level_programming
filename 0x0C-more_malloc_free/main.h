#ifndef MAIN_H
#define MAIN_H
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
#endif
