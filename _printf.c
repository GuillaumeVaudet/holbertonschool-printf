#include <stdlib.h>
#include "main.h"

/**
 * get_specifier - searches for a matching specifier in the array
 * @c: char to compare with array
 * @array: array that use to compare and return the correct function
 * @size: size of the array
 * Return: pointer to the matching function, or NULL if not found
 */
int (*get_specifier(char c, specifier_t *array, int size))(va_list)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (c == array[i].id)
		{
			return (array[i].f);
		}
		i++;
	}
	return (NULL);
}
/**
* _printf - display a string according to a format
* @format: pointer to a string
* Return: int - numbers of char printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int (*f)(va_list);

	int i = 0, counter = 0;
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
				return (-1);
			f = get_specifier(format[i], array_of_specifier, 5);
			if (f != NULL)
				counter += f(args);
			else
			{
				_putchar('%');
				_putchar(format[i]);
				counter += 2;
			}
		}
		i++;
	}
	va_end(args);
	return (counter);
}
