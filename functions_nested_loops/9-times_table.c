#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			if (j == 0)
			{
				/* first number in row, print without leading comma */
				if (prod >= 10)
				{
					_putchar('0' + (prod / 10));
					_putchar('0' + (prod % 10));
				}
				else
					_putchar('0' + prod);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				/* align to width 3: add extra space for single-digit results */
				if (prod < 10)
					_putchar(' ');
				if (prod >= 10)
				{
					_putchar('0' + (prod / 10));
					_putchar('0' + (prod % 10));
				}
				else
					_putchar('0' + prod);
			}
		}
		_putchar('\n');
	}
}
