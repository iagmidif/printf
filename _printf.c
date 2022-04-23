#include "main.h"

/**
 * _printf - simplified duplicate of printf
 * @format: pointer to the format string
 *
 * Return: mnumber of characters printed on a valid format string
 * -1 otherwise.
 */
int _printf(const char *format, ...)
{
	va_list params;
	int printed = 0;
	const char *ptr;

	va_start(params, format);
	if (!format || (format[0] == '%' && (!format[1]
					|| (format[1] == ' ' && !format[2]))))
		return (-1);
	ptr = format;
	for (; *ptr; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == '%')
			{
				printed += _putchar('%');
				continue;
			}
			printed += print_func(params, *ptr);
		}
		else
			printed += _putchar(*ptr);
	}
	va_end(params);
	return (printed);
}
