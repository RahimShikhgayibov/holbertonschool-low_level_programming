#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 * or if str is NULL.
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, len;

	/* 1. Sətrin NULL olub-olmadığını yoxla */
	if (str == NULL)
		return (NULL);

	/* 2. Sətrin uzunluğunu hesabla */
	len = 0;
	while (str[len] != '\0')
		len++;

	/* 3. Yaddaş ayır (len + 1, çünki '\0' simvolu üçün yer lazımdır) */
	copy = malloc(sizeof(char) * (len + 1));

	/* 4. Malloc-un uğurlu olub-olmadığını yoxla */
	if (copy == NULL)
		return (NULL);

	/* 5. Sətri kopyala */
	for (i = 0; i <= len; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}
