#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

void fun_char(va_list copy2) 
{
    _putchar(va_arg(copy2, int));
}

void fun_str(va_list copy2) 
{
    char *p = va_arg(copy2, char *);
    int x = 0;
    while (p[x])
    {
    _putchar(*p);
    p++;
    }
    x++;
}

void fun_int(va_list copy2) 
{
    int *p = va_arg(copy2, int *);
    int x = 0;
    while (p[x])
    {
    _putchar(x);
    p++;
    }
    x++;
}

void fun_double(va_list copy2) 
{
	int z = va_arg(copy2, int);
	int i = 0;
	int m = -z;
	int b = -z;
	if (z < 0)
	{
		_putchar('-');
	}
	while(z != 0)
	{
		z = (z / 10);
		i++;
	}
	int q = 0;

	while (q < i)
	{	
		m = (b % 10) + '0';
		q++;
		_putchar(m);
		b = (b / 10);
	}
}