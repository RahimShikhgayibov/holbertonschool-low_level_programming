#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings using n bytes from s2.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the number of bytes from s2 to concatenate.
 *
 * Return: pointer to the newly allocated space, or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* 1. NULL göndərilibsə, boş sətir kimi rəftar et */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* 2. s1-in uzunluğunu tap */
	while (s1[len1] != '\0')
		len1++;

	/* 3. s2-nin uzunluğunu tap */
	while (s2[len2] != '\0')
		len2++;

	/* 4. n şərtini yoxla və tənzimlə */
	if (n >= len2)
		n = len2;

	/* 5. Yaddaş ayır (len1 + n + 1 null terminator üçün) */
	concat = malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
		return (NULL);

	/* 6. s1-i kopyala */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* 7. s2-nin n baytını s1-in ardına kopyala */
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	/* 8. Sətri null terminatorla bitir */
	concat[i] = '\0';

	return (concat);
}
