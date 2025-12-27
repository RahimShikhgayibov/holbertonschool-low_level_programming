#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array.
 * @size: size of each element in bytes.
 *
 * Return: pointer to the allocated memory, or NULL if it fails or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;

	/* 1. nmemb və ya size 0-dırsa, NULL qaytar */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* 2. Ümumi lazım olan yaddaş sahəsini hesabla */
	total_size = nmemb * size;

	/* 3. Malloc ilə yaddaş ayır */
	ptr = malloc(total_size);

	/* 4. Malloc xətasını yoxla */
	if (ptr == NULL)
		return (NULL);

	/* 5. Yaddaşı sıfırla (initialize to zero) */
	for (i = 0; i < total_size; i++)
	{
		ptr[i] = 0;
	}

	return ((void *)ptr);
}
