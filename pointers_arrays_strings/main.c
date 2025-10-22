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
}

/**
 * main - test string_toupper function
 *
 * Return: 0
 */
int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	_puts(ptr);
	_putchar('\n');
	_puts(str);
	_putchar('\n');

	return (0);
}
