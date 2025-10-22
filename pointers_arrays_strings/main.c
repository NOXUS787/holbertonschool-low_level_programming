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
 * main - test the _strncat function
 *
 * Return: 0
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	ptr = _strncat(s1, s2, 1);
	_puts(s1);
	_puts(s2);
	_puts(ptr);

	ptr = _strncat(s1, s2, 1024);
	_puts(s1);
	_puts(s2);
	_puts(ptr);

	return (0);
}
