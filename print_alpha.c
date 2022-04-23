#include "main.h"

/**
 * print_char - prints a char type
 * @params: va_list arguments
 *
 * Return: 1 if successful
 * 0 otherwise
 */
int print_char(va_list params)
{
	return (_putchar(va_arg(params, int)));
}

/**
 * print_str - prints a string
 * @params: va_list arguments
 *
 * Return: number of characters printed
 */
int print_str(va_list params)
{
	int count = 0;
	char *str = va_arg(params, char *);

	if (!str)
		str = "(null)";
	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}
