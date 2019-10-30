#include "holberton.h"
/**
 * _printf - function that realized the all functions of the printf command
 * @format: input of the function
 * Return: count of the strings or chars sents.
 */
int _printf(const char *format, ...)
{
	ty_t ty[] = {{'c', fun_char}, {'s', fun_str}, {'d', fun_d}, {'i', fun_int}};

	va_list copy2;
	int i = 0, j, count = 0, v1 = 0;

	va_start(copy2, format);
	if (format == NULL)
	return (-1);

		while (format && format[i])
	{
			if (format[i] == '%' && format[i + 1] == '\0')
				return (-1);
			if (format[i] == '%' && format[i + 1] == '%')
			{
				count += _putchar('%');
				i++;	}
			else if (format[i] == '%' && format[i + 1] != '%')
			{
				v1 = 0;
				for (j = 0; j < 4; j++)
				{
					if (format[i] == '%' && format[i + 1] == ty[j].ty)
					{
						count += ty[j].f(copy2);
						i++;
						v1 = 1;	}
				}
				if (v1 == 0)
				{
					count += _putchar('%');
					count += _putchar(format[i + 1]);
				i++;
				}
			}
			else
			count += _putchar(format[i]);
	i++;	}
	va_end(copy2);
	return (count);
}
