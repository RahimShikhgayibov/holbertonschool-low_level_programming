#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* Return NULL if size is 0 as per requirements */
	if (size == 0)
		return (NULL);

	/* Attempt to allocate memory for the array */
	array = malloc(sizeof(char) * size);

	/* Check if malloc failed (e.g., not enough memory) */
	if (array == NULL)
		return (NULL);

	/* Initialize every element of the array with char c */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
