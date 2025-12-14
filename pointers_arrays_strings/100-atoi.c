#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num_started = 0;
	int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			; /* do nothing */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num_started = 1;

			/* Check for overflow before multiplying */
			if (result > (INT_MAX - (s[i] - '0')) / 10)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}

			result = result * 10 + (s[i] - '0');
		}
		else if (num_started)
			break; /* stop if number has started and non-digit found */
		i++;
	}

	return (result * sign);
}
