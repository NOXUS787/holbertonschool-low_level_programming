#include "main.h"
#include <stdio.h> /* only for local printf testing */


/**
 * _puts - prints a string using _putchar
 * @str: string to print
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - test the _strncpy function
 *
 * Return: 0
 */
int main(void)
{
	char s1[98];
	char *ptr;
	int i;

	for (i = 0; i < 98 - 1; i++)
		s1[i] = '*';
	s1[i] = '\0';

	_puts(s1);

	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
	_puts(s1);
	_puts(ptr);

	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
	_puts(s1);
	_puts(ptr);

	for (i = 0; i < 98; i++)
	{
		if (i % 10)
			_putchar(' ');
		if (!(i % 10) && i)
			_putchar('\n');
		printf("0x%02x", s1[i]);
		if (i != 97)
			_putchar(' ');
	}
	_putchar('\n');

	return (0);
}
