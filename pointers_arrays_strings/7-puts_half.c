#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i;

	/* calculate string length */
	while (str[len] != '\0')
		len++;

	/* start at the middle of string, round up if odd */
	i = (len + 1) / 2;

	/* print the second half */
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
