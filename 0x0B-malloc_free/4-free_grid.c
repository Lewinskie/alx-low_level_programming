#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory allocated for a 2 dimen grid
 * @grid: pointer to the grid
 * @height: height input
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL)
		return;
	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
