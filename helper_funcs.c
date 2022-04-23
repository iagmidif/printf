#include "main.h"

/**
 * get_handler - returns a function that handles a given specifier
 * @c: specifier
 *
 * Return: pointer to the handler function if found
 * Null otherwise
 */
int (*get_handler(char c))(va_list params)
{
	map arr[] = {
		{'c', print_char},
		{'s', print_str},
	};
	int i;

	for (i = 0; i < 4; i++)
		if (arr[i].c == c)
			return (arr[i].f);
	return (NULL);
}
