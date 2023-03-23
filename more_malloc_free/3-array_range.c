#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: an input integer that represents the minimum
 * @max: an input integer that representes the maximum
 * Return: A pointer to the newly array created or NULL
 */

int *array_range(int min, int max)
{
	int *nuevo;
	int dif, i;

	if (min > max)
		return (NULL);

	dif = max - min;
	nuevo = malloc((dif + 1) * sizeof(int));
	if (nuevo == NULL)
		return (NULL);

	for (i = 0; i <= dif; i++)
	{
		nuevo[i] = min;
		min++;
	}
	return (nuevo);
}
