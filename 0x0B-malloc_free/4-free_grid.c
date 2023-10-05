#include "main.h"

/**
 * free_grid - function that frees 2 dimensional grid
 *@grid: memory grid
 *@height: int
 *Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
