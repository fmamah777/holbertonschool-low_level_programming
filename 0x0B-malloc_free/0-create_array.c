#include "main.h"

/**
 * create_array - the beginning of the array
 * @size: the size of the memory to print
 * @c: character were initializing to
 * Return: Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	array = malloc(size * sizeof(char));
	if (array == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
