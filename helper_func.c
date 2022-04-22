#include "main.h"

/**
 * print_func - helper function for _printf
 * - prints according to a a passed conversion specifier
 * @specifier: conversion specifier
 * @params: arguments passed to _printf
 *
 * Return: number of characters printed
 */
int print_func(va_list params, char specifier)
{
	int count = 0, i = 0;
	char *str;

	switch (specifier)
	{
		case 'c':
			count += _putchar(va_arg(params, int));
			break;
		case 's':
			str = va_arg(params, char *);
			while (*(str + i))
			{
				count += _putchar(*(str + i));
				i++;
			}
			break;
	}
	return (count);
}
