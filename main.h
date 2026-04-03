#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
* specifier - new struct to print
* @id: char
* @f: pointer to a func
*/
typedef struct
{
	char id;
	int (*f)(va_list);
} specifier;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif

