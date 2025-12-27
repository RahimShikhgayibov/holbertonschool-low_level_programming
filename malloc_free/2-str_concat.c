#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the newly allocated space, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1, len2;

	/* 1. NULL göndərilibsə, boş sətir kimi rəftar et */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* 2. Hər iki sətrin uzunluğunu tap */
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	/* 3. Yaddaş ayır (s1 + s2 + '\0') */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	/* 4. Malloc xətasını yoxla */
	if (concat == NULL)
		return (NULL);

	/* 5. s1-i yeni sahəyə kopyala */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* 6. s2-ni s1-in ardına kopyala */
	for (j = 0; j < len2; j++, i++)
		concat[i] = s2[j];

	/* 7. Sətri null terminatorla bitir */
	concat[i] = '\0';

	return (concat);
}
