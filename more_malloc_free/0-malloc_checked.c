#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the number of bytes to allocate.
 *
 * Return: a pointer to the allocated memory.
 * if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* Yaddaş ayırmağa cəhd et */
	ptr = malloc(b);

	/* Əgər malloc uğursuz olsa (NULL qaytarsa) */
	if (ptr == NULL)
	{
		/* Proqramı 98 statusu ilə dayandır */
		exit(98);
	}

	return (ptr);
}
