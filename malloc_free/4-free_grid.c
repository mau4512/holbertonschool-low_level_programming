#include "main.h"
#include <stdlib.h>

/*
 * free_grid - A functuin that frees a 2D array if ints previously
 * created by yout malloc_grid function
 * @grid: an input 2D array of integers to free
 * @height: height of grid
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free((int *)grid[i]);
	free(grid);
}
