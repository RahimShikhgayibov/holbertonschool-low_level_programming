#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to 2D array, or NULL on failure or if width/height <= 0
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* 1. Ölçülərin düzgünlüyünü yoxla */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* 2. Sətirlər üçün göstəricilər massivi (array of pointers) ayır */
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	/* 3. Hər bir sətir üçün sütunların sayına uyğun yaddaş ayır */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		/* Əgər hər hansı sətirdə malloc xətası olsa, hər şeyi təmizlə */
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* 4. Elementləri 0-a bərabər et */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
