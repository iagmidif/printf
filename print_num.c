#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_int - prints an integer
 * @params: va_list arguments
 *
 * Return: number of characters printed
 */
int print_int(va_list params)
{
	int n, len, count;
	char *str;

	n = va_arg(params, int);
	count = 0;
	if (n < 0)
	{
		count += _putchar('-');
		n *= -1;
	}

	len = snprintf(NULL, 0, "%d", n);
	str = malloc(len + 1);
	snprintf(str, len + 1, "%d", n);
	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}
