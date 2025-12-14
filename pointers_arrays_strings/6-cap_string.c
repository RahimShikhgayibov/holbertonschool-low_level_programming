#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i = 0;

	/* capitalize first character if it is a lowercase letter */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - ('a' - 'A');
	i++;

	/* loop through rest of the string */
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
		    (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
		     str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
		     str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
		     str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
		     str[i - 1] == '}'))
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}

	return (str);
}
