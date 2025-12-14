#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search in
 * @accept: string containing accepted characters
 *
 * Return: number of bytes in the initial segment of s consisting
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;
	int found;

	while (s[i] != '\0')
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		i++;
	}
	return (i);
}
