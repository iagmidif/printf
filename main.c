#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%d", 1024);
	len2 = printf("%d", 1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("\n%d, %d\nLengths differ.\n", len, len2);
		fflush(stdout);
		return (1);
	}
	return (0);
}
