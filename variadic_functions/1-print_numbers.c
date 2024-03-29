#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that print numbers followed by a new line
 * @separator: an input string to be printed between numbers
 * @n: number of parameters
 * @...: other parameters
 * Return: all the parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int numeros;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		numeros = va_arg(ap, int);
		printf("%d", numeros);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
