#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid.
 * @grid: The 2D grid to be freed.
 * @height: The height dimension of the grid.
 *
 * Description: Frees the memory of the grid.
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
