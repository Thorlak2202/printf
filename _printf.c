#include "holberton.h"
/**
 * _printf - function that realized the all functions of the printf command
 * @format: input of the function
 * Return: count of the strings or chars sents.
 */
int _printf(const char *format, ...)
{
	ty_t ty[] = {{'c', fun_char}, {'s', fun_str}};
	va_list copy2;
	int i = 0, j, count = 0;

	va_start(copy2, format);
	if (format == NULL)
		return (-1);
		while (format && format[i])
	{
			if (format[i] == '%' && format[i + 1] == '\0')
			{
				if (format[i] == '%' && format[i + 1] == '\0')
				return (-1);	}
			if (format[i] == '%' && format[i + 1] == '%')
			{
				count += _putchar('%');
				i++;
			}
			else if (format[i] == '%' && format[i + 1] != '%')
			{
				for (j = 0; j < 2; j++)
				{
					if (format[i] == '%' && format[i + 1] == ty[j].ty)
					{
						count += ty[j].f(copy2);
						i++;
					}
				}
				if (format[i] == '%' && format[i + 1] == '%')
				{
					count += _putchar('%');
					i++;
				}
			}
			else
			count += _putchar(format[i]);
	i++;
	}
	va_end(copy2);
	return (count);
}
