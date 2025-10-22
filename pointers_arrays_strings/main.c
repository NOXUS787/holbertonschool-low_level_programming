#include "main.h"

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
 * print_array - print an array of integers using _putchar
 * @a: array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		_print_number(a[i]);
	}
	_putchar('\n');
}

/**
 * main - test reverse_array function
 *
 * Return: 0
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	int n = sizeof(a) / sizeof(int);

	print_array(a, n);
	reverse_array(a, n);
	print_array(a, n);

	return (0);
}
