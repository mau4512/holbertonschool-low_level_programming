#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array using malloc
 * @nmemb: unigned input integer that represents number of memory spaces
 * @size: unsigned input integer that represents size of nmemb
 * Return: returns a pointer to allocated space, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *almacen;

	if (nmemb == 0 || size == 0)
		return (NULL);

	almacen = malloc(nmemb * size);
	if (almacen == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(almacen + i) = 0;

	return (almacen);
}
