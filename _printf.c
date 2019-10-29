#include "holberton.h"
#include <stdlib.h>

/**
 * _printf - function that realized the all functions of the printf command
 * @format: input of the function
 *
 * Return: Always i
 */
int _printf(const char *format, ...)
{
ty_t ty[] = {
{'c', fun_char},
{'s', fun_str},
};
va_list copy2;
int i = 0;
int j = 0;
int k = 0;
int v1 = 0;
va_start(copy2, format);

if (format == NULL)
{
	return (-1);
}
while (format && format[i])
{
	j = 0;
	while (j < 2)
	{
		if (format[k] == '%' && format[k + 1] == '%')
		{
			_putchar('%');
			k += 2;
		}
		else if (format[i] == '%' && format[i + 1] == ty[j].ty)
		{
			ty[j].f(copy2);
			i += 2;
		}
		j++;
	}
	_putchar(format[i]);
	i++;
}
va_end(copy2);
v1 = i + k + j - 1;
return (v1);
}
