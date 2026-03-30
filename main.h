#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef struct
{
	char id;
	int (*f)(va_list);
} specifier;

int _putchar(char c);
int _printf(const char *format, ...);
#endif
