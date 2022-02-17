#include "main.h"
/**
* free_grid - function being used
* @grid: 1st parameter
* @height: 2nd parameter being used
* Return: Return  NULL
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
