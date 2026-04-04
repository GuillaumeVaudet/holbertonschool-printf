#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
* struct specifier - new struct to print
* @id: char
* @f: pointer to a func
*/
typedef struct specifier
{
	char id;
	int (*f)(va_list);
} specifier_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);

#endif

