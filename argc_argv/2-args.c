#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives, one per line
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
