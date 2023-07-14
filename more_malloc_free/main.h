#ifndef MAIN_H
#define MAIN_H
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/*
 * File: main.h
 * Author: diego beltran
 * Description: Header file of  prototypes for functions
 */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
