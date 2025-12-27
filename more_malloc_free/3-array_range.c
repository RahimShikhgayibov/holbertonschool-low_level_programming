#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the minimum value to include (inclusive).
 * @max: the maximum value to include (inclusive).
 *
 * Return: pointer to the newly created array,
 * or NULL if min > max or malloc fails.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	/* 1. Şərtə görə min max-dan böyükdürsə NULL qaytar */
	if (min > max)
		return (NULL);

	/* 2. Lazım olan elementlərin sayını hesabla */
	/* Misal: min=0, max=10 üçün 11 element lazımdır (10 - 0 + 1) */
	size = max - min + 1;

	/* 3. Yaddaş ayır */
	array = malloc(sizeof(int) * size);

	/* 4. Malloc xətasını yoxla */
	if (array == NULL)
		return (NULL);

	/* 5. Massivi min-dən max-a qədər rəqəmlərlə doldur */
	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}

	return (array);
}
