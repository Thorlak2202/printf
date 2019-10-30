#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/**
* struct ty - structure used in the function printf
* @ty:input of the structure
* @f: input of pointer of the structure
**/
typedef struct ty
{
	char ty;
	int (*f)(va_list copy2);
} ty_t;

int _printf(const char *format, ...);
int _putchar(char c);
int fun_char(va_list copy2);
int fun_str(va_list copy2);
int fun_d(va_list copy2);
int fun_int(va_list copy2);

#endif
