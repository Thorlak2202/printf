#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <math.h>

/**
 * fun_char - function that prints char.
 * @copy2: entry value.
 *
 *  Return: size of char.
 */

int fun_char(va_list copy2)
{
	_putchar(va_arg(copy2, int));
	return (1);
}
/**
 * fun_str - function that prints string.
 * @copy2: entry value.
 *
 * Return: Size of string
 */

int fun_str(va_list copy2)
{
	char *p = va_arg(copy2, char *);
	int x = 0;
if (p == NULL)
{
	char *f = "(null)";
	int g = 0;

	while (f[g])
	{
	_putchar(f[g]);
	g++;
	}
}
else
{
while (p[x])
{
	_putchar(p[x]);
	x++;
}
}
return (x);

}
