#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: the 2D grid to be freed
 * @height: the height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Əgər grid mövcud deyilsə, heç nə etmə */
	if (grid == NULL || height <= 0)
		return;

	/* 1. Hər bir sətri tək-tək azad et */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* 2. Sətirlərin ünvanlarını saxlayan əsas massivi azad et */
	free(grid);
}
