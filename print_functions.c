#include "main.h"
#include <stdlib.h>

/**
 * print_char - prints a character
 * @args: va_list containing the character
 *
 * Return: number of characters printed
 */

int print_char(va_list args)
{
char c;

c = (char)va_arg(args, int);

return (_putchar(c));
}


/**
 * print_string - print string
 * @args: va_list
 * Return: int - number of char printed
 */
int print_string(va_list args)
{
	int i = 0;
	int counter = 0;
	char *s = va_arg(args, char *);
	char *nil_string = "(nil)";

	if (s == NULL)
	{
		while (nil_string[i] != '\0')
		{
			counter += _putchar(nil_string[i]);
			i++;
		}
		return (counter);
	}
	while (s[i] != '\0')
	{
		counter += _putchar(s[i]);
		i++;
	}
	return (counter);
}

/**
 * print_percent - print the percent symbol
 * @args: va_list
 * Return: int - number of char printed
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}

