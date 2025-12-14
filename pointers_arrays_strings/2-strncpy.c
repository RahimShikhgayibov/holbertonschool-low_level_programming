#include "main.h"

/**
 * _strncpy - copies at most n characters from src to dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of characters to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* copy characters from src to dest */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* if src length < n, pad dest with null bytes */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
