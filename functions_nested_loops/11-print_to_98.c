#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Numbers are separated by a comma followed by a space, and the sequence
 * ends with a newline.
 */
void print_to_98(int n)
{
	int curr = n;
	unsigned int abs_val;
	int i;
	char buf[12]; /* enough for int digits + sign */

	while (curr != 98)
	{
		/* print curr */
		if (curr < 0)
		{
			_putchar('-');
			abs_val = (unsigned int)(-curr);
		}
		else
			abs_val = (unsigned int)curr;

		/* build digits in reverse order */
		i = 0;
		do {
			buf[i++] = '0' + (abs_val % 10);
			abs_val /= 10;
		} while (abs_val > 0);

		/* output digits in correct order */
		while (i-- > 0)
			_putchar(buf[i]);

		_putchar(',');
		_putchar(' ');

		/* move toward 98 */
		if (n < 98)
			curr++;
		else
			curr--;
	}

	/* print 98 and newline */
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
