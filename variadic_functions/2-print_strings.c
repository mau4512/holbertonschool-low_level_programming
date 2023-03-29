#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that print strings follow by a new line
 * @separator: an input string to be printed between numbers
 * @n: number of parameters
 * @...: other parameters
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *cadena;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		cadena = va_arg(ap, char*);
		if (cadena == NULL)
			printf("(nil)");
		else
			printf("%s", cadena);

		if (separator == NULL)
				continue;
		if (i < n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(ap);
}

