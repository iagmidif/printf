#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

/**
 * struct pfunc_map - maps a specifier with it's corresponding print handler
 * @c: specifier
 * @f: pointer to the print handler
 */
typedef struct pfunc_map
{
	char c;
	int (*f)(va_list params);
} map;

int _putchar(char c);
int _printf(const char *format, ...);
int print_func(va_list params, char specifier);
int (*get_handler(char c))(va_list params);
int print_char(va_list params);
int print_str(va_list params);
int print_int(va_list params);

#endif
