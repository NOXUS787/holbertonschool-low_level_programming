#include "main.h"
#include <stdio.h>

/**
 * main - check the code for _isdigit
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	int result;

	/* Test 1: digit */
	c = '0';
	result = _isdigit(c);
	printf("%c: %d\n", c, result);

	/* Test 2: non-digit */
	c = 'a';
	result = _isdigit(c);
	printf("%c: %d\n", c, result);

	return (0);
}
