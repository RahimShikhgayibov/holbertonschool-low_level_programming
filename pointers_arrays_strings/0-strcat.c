#include "main.h"

/**
 * _strcat - concatenates the src string to the dest string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* find the end of dest string */
	while (dest[i] != '\0')
		i++;

	/* copy src to dest starting at the end */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0'; /* add terminating null byte */

	return (dest);
}
