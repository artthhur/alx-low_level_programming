#include "main.h"
#include <stdlib.h>
/**
 * free_grid -frees a 2d grid
 * @grid: grid to fee
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height <= 0)
		return;
	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
