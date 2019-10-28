#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

typedef struct ty
{
	char ty;
	void (*f)(va_list copy2);
} ty_t;

int _printf(const char *format, ...);
int _putchar(char c);
void fun_char(va_list copy2);
void fun_str(va_list copy2);
void fun_int(va_list copy2);
void fun_double(va_list copy2);

#endif
