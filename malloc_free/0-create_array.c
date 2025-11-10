#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * @size: size of the array
 * @c: char to initialize with
 *
 * Return: pointer to the array, or NULL if size is 0 or allocation fails
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *arr;

    if (size == 0)
        return (NULL);

    arr = malloc(size * sizeof(char));
    if (arr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        arr[i] = c;

    return (arr);
}
