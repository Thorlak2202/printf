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
	int g = 0;
	int x = 0;

if (p == NULL)
{
	char *f = "(null)";

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
return (x + g);
}

int fun_d(va_list copy2) 
{
	unsigned int count1 = 0, v1 = 0, v2 = 0, count2 = 0, v3 = 0;
	int z = va_arg(copy2, int);

	if (z < 0)
	{
		v1 = (z * -1);
		count1 += _putchar('-');
	}
	else
	{
		v1 = z;
	}
	v2 = v1;
	count2 = 1;
	while(v2 > 9)
	{
		v2 = (v2 / 10);
		count2 = (count2 * 10);
	} 
	while (count2 >= 1)
	{	
	
		v3 = (((v1 / count2) % 10) + '0');
		count1 += _putchar(v3);
		count2 = (count2 / 10);
	}
	return (count1);
}

int fun_int(va_list copy2)
{
	return (fun_d(copy2));
}