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
	len = snprintf(NULL, 0, "%d", n);
	str = malloc(len + 1);
	if (!str)
		return (0);
	snprintf(str, len + 1, "%d", n);
	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	str -= count;
	free(str);
	return (count);
}

/**
 * print_binary - converts a unsigned integer to binary and then prints it
 * @params: va_list arguments
 *
 * Return: number of chars printed
 */
int print_binary(va_list params)
{
	int binary[64], i = 0, j = 0;
	unsigned int n = va_arg(params, unsigned int);
	int count = 0;

	while (i < 32 && n > 1)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}
	if (n == 1)
	{
		binary[i] = 1;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		count += _putchar(binary[j] + '0');
	return (count);
}
