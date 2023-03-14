#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this is a function that frees a 2 dimensional grid
 * @grid: a pointer to pointer integer
 * @height: for the dimensional grid
 * Return: NULL if failed
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
