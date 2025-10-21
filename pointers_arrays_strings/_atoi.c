#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	long result = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');

			/* Clamp to INT_MIN / INT_MAX to prevent overflow */
			if (sign == 1 && result > 2147483647)
				return (2147483647);
			if (sign == -1 && -result < -2147483648)
				return (-2147483648);
		}
		else if (result > 0)
			break; /* stop parsing once digits end */
		s++;
	}

	return ((int)(sign * result));
}
