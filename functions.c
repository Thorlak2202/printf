#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

/**
 * fun_char - function that prints char.
 *
 * @copy2: entry value.
 */

void fun_char(va_list copy2)
{
	_putchar(va_arg(copy2, int));
}

/**
 * fun_str - function that prints string.
 *
 * @copy2: entry value.
 */

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

/**
 * fun_int - function that prints integer.
 *
 * @copy2: entry value.
 */

/*
void fun_int(va_list copy2)
{
	int z = va_arg(copy2, int);
	int i = 0;
	int m = z;
	int b = z;
	int q = 0;

	printf("%d\n", b);
	if (z < 0)
	{
		_putchar('-');
	}

	while (z != 0)
	{
		z = (z / 10);
		i++;
	}

	while (q < i)
	{
		m = (b % 10) + '0';
		q++;
		_putchar(m);
		b = (b / 10);
	}
} */

/**
 * fun_double - function that prints base 10 int.
 *
 * @copy2: entry value.
 */

/*
void fun_double(va_list copy2)
{
	int z = va_arg(copy2, int);
	int i = 0;
	int m = z;
	int q = 0;
	int b = z;

	if (z < 0)
	{
		_putchar('-');
	}
	while (z != 0)
	{
		z = (z / 10);
		i++;
	}

	while (q < i)
	{
		m = (b % 10) + '0';
		q++;
		_putchar(m);
		b = (b / 10);
	}
}*/
