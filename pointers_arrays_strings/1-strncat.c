#include "main.h"

/**
 * _strncat - Concatenates at most n bytes from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: Maximum number of bytes to append from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
		i++;

	/* Append at most n characters from src */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Null-terminate the result */
	dest[i] = '\0';

	return (dest);
}
