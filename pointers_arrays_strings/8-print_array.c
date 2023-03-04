#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: an input array
 * @n: an input integer
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int cont;
	
	for (cont = 0; cont < n; cont++)
	{
		printf("%d", a[cont]);
		if (cont < n-1)
			printf(", ");
	}
	putchar('\n');
}


