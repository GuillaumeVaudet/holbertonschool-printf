#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
* _printf - display a string according to a format
* @format: pointer to a string
* Return: int - numbers of char printed
*/
int _printf(const char *format, ...)
{
	va_list args;

	int i = 0, j, counter = 0;

	specifier_t array_of_specifier[5] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'%', print_percent}
	};

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
		} else
		{
			i++;
			if (format[i] == '\0')
				return (counter);
			j = 0;
			while (j < 5)
			{
				if (format[i] == array_of_specifier[j].id)
				{
					counter += array_of_specifier[j].f(args);
					break;
				}
				j++;
			}
			if (j == 5)
			{
				_putchar(format[i]);
				counter++;
			}
		}
		i++;
	}
	va_end(args);
	return (counter);
}
