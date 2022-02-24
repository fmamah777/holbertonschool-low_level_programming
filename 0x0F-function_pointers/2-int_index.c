#include "function_pointers.h"

/**
 * int_index - function being used to find int
 * @size: the size
 * @array: the array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if theres no matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
		return (x);
	}
	return (-1);
}
