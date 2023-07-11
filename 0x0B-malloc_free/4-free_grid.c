#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Free a dynamically allocated memory after usage
 * @grid: A 2D array
 * @height: The number of rows of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
