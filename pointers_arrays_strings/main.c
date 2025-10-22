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
 * main - test leet function
 *
 * Return: 0
 */
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	_puts(p);
	_putchar('\n');
	_puts(s);
	_putchar('\n');

	return (0);
}
