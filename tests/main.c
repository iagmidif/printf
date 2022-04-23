#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * - tests for _printf
 *
 * Return: always 0
 */
int main(void)
{
	int len = _printf("Let's try to printf a simple sentence.\n");
	int len2 = printf("Let's try to printf a simple sentence.\n");
	
	_printf("%d %i\n", len, len2);
	printf("%d %i\n", len, len2);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("%c m%s com%c%c%s%cone %%%cY%s %c%s%c", 'A', "ore", 'p', 'l', "ex", ' ', ' ', "es", 'H', "ello", '\n');
	printf("%c m%s com%c%c%s%cone %%%cY%s %c%s%c", 'A', "ore", 'p', 'l', "ex", ' ', ' ', "es", 'H', "ello", '\n');
	_printf('\0');
	printf('\0');
	_printf("%s%c\n");
	printf("%s%c\n");
	_printf("");
	printf("");
	len = _printf("Percent:[%%]\n");
    	len2 = printf("Percent:[%%]\n");
    	_printf("Len:[%d]\n", len);
    	printf("Len:[%d]\n", len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("%b\n", 98);
	_printf("%b\n", -98);

	return (0);
}
