#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
    long result = 0;
    int sign = 1;

    /* Skip any non-digit characters at the beginning */
    while (*s)
    {
        if (*s == '-')
            sign *= -1;
        else if (*s == '+')
            ;
        else if (*s >= '0' && *s <= '9')
            break;
        s++;
    }

    /* Convert digits to integer */
    while (*s && *s >= '0' && *s <= '9')
    {
        result = result * 10 + (*s - '0');

        /* Clamp to INT_MAX / INT_MIN if overflow would occur */
        if (sign == 1 && result > 2147483647)
            return (2147483647);
        if (sign == -1 && -result < -2147483648)
            return (-2147483648);

        s++;
    }

    return ((int)(sign * result));
}
