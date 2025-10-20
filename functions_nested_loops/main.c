#include "main.h"

/**
 * main - check the code for print_alphabet_x10 and _islower
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	print_alphabet_x10();

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
