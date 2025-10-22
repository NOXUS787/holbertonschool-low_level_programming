#include "main.h"

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
 * _print_number - prints an integer using _putchar
 * @n: number to print
 */
void _print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		_print_number(num / 10);

	_putchar((num % 10) + '0');
}

/**
 * main - test the _strcmp function
 *
 * Return: 0
 */
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";
	int res;

	res = _strcmp(s1, s2);
	_print_number(res);
	_putchar('\n');

	res = _strcmp(s2, s1);
	_print_number(res);
	_putchar('\n');

	res = _strcmp(s1, s1);
	_print_number(res);
	_putchar('\n');

	return (0);
}
