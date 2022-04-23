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
	printf("%d %d\n", len, len2);
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
	return (0);
}
