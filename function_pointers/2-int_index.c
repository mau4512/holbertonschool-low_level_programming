#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: A pointer to array
 * @size: Size of the array
 * @cmp: cmp(function) to compare elementes throw the array
 * Return: The index od the first element for width the cmp function or 0
 * if ther are not elementes return -1 or if size is less than 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	if (size == i)
	{
		return (-1);
	}
	return (-1);
}
