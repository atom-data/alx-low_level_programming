#include "main.h"

/**
 * free_grid - free two dimensional grid
 * @grid: two dimensional grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL || height <= 0)
		return;
	h = 0;
	while (h < height)
	{
		free(*grid + h);
		h++;
	}
	free(grid);
}
