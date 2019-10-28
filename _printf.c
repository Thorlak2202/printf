#include "holberton.h"

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
{'d', fun_double},
{'i', fun_int},
};

va_list copy2;
int i = 0;
int j = 0;

va_start(copy2, format);

while (format && format[i])
{
	j = 0;
	while (j < 4)
	{
		if (format[i + 1] == ty[j].ty && format[i] == '%')
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
return (i);
}
