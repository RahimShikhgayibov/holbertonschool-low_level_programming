#include "main.h"

/**
 * puts_half - prints the second half of a string followed by a new line
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int len = 0;
	int i, start;

	/* find string length */
	while (str[len] != '\0')
		len++;

	/* determine starting index */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	/* print second half */
	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
