#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Description: This function concatenates s1 with the first n bytes of s2.
 * If n is greater or equal to the length of s2, the entire s2 is used.
 * If s1 or s2 is NULL, they are treated as empty strings. The function
 * returns a pointer to a newly allocated space in memory containing the
 * result. If malloc fails, the function returns NULL.
 *
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	ptr = malloc(len1 + n + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[len1 + j] = s2[j];

	ptr[len1 + n] = '\0';

	return (ptr);
}
