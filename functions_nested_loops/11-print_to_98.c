#include "main.h"

/**
 * print_num - prints an integer using _putchar
 * @n: integer to print
 */
static void print_num(int n)
{
	unsigned int num;
	int i = 0;
	char buf[12];

	if (n < 0)
	{
		_putchar('-');
		num = (unsigned int)(-n);
	}
	else
		num = (unsigned int)n;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	while (num > 0)
	{
		buf[i++] = '0' + (num % 10);
		num /= 10;
	}

	while (i-- > 0)
		_putchar(buf[i]);
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int curr = n;

	while (curr != 98)
	{
		print_num(curr);
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			curr++;
		else
			curr--;
	}

	print_num(98);
	_putchar('\n');
}
