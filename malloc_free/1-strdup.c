#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: An input pointer of the string to copy.
 * Return: Apointer to new string or NULL if it str is NULL
 */

char *_strdup(char *str)
{
	char *nuevo;

	int size = 0;

	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}

	nuevo = malloc(sizeof(char) * (size + 1));

	if (str != NULL)
	{
		for (i = 0; i < size; i++)
		{
			nuevo[i] = str[i];
		}
		nuevo[i] = '\0';

		return (nuevo);
	}
	else
		return (NULL);
}

