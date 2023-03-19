#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - A function that returns a pointer to a 
* 2 dimensional array of integers
* @width: An input integer at number of columns
* @height: An input integer at number of rows
* Return: pointer to a 2D array, NULL on failure
*/

int **alloc_grid(int width, int height)
{
	int **array;

	int i;

	int j;

	int a;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int**)malloc(sizeof(int*) * height);
	if (array == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		array[a] = (int*)malloc(sizeof(int) * width);
		if(array[a] == NULL)
		{
			while(a >= 0)
			{
				free(array[a]);
				a--;
			}
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array [i][j] = 0;
	}

	return (array);
}
