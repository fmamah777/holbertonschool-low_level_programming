#include "main.h"
/**
 * array_range - function being used
 * @min: minimum parameter
 * @max: maximum max parameter
 *
 * Return: int
 */

int *array_range(int min, int max)
{
	int *array;
	int x, length;
	int y = min;

	if (min > max)
	{
		return (NULL);
	}

	length = (max - min) + 1;

	array = malloc(sizeof(int) * length);

	if (array == NULL)
	{
		return (NULL);
	}

	for (x = 0; y <= max; y++)
	{
		array[x] = y;
		x++;
	}
	return (array);
}
