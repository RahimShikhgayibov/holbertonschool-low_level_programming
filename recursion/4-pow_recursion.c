#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The value to raise.
 * @y: The power.
 *
 * Return: If y < 0 - -1 to indicate an error.
 * If y == 0 - 1.
 * Otherwise - The value of x to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
