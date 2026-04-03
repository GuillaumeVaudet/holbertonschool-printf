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

_putchar(c);

return (0);
}
