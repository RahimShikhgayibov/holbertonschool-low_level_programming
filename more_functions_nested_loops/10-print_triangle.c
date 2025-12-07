#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle using '#'
 * @size: size of the triangle
 *
 * If size <= 0, prints only a newline.
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (col = 0; col < size - row; col++)
			_putchar(' ');
		for (col = 0; col < row; col++)
			_putchar('#');
		_putchar('\n');
	}
}
