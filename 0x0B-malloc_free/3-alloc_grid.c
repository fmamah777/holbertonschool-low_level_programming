#include "main.h"
/**
 * alloc_grid - the function being used
 *@width: first parameter
 *@height: the second parameter used
 *Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int *row = NULL;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		row = malloc(width * sizeof(int));
		if (row == NULL)
		{
			for (y--; y >= 0; y--)
			{
				free(grid[y]);
			}
			free(grid);
			return (NULL);
		}
		for (x = 0; x < width; x++)
		{
			row[x] = 0;
		}
		grid[y] = row;
	}
	return (grid);
}
