#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: the array to search in
 * @size: the number of elements in the array
 * @cmp: pointer to the function used to compare values
 *
 * Description: This function loops through the array and applies the
 * comparison function to each element. It returns the index of the
 * first element for which cmp does not return 0. If no element matches,
 * or if size <= 0, or if array or cmp are NULL, the function returns -1.
 *
 * Return: index of the first matched element, or -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
