#include "main.h"

/**
 * _strncat - concatenates at most n bytes of src to dest
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to concatenate from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* find the end of dest string */
	while (dest[i] != '\0')
		i++;

	/* copy at most n bytes from src to dest */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0'; /* add terminating null byte */

	return (dest);
}
