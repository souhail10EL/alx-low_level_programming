#include "main.h"
/**
 * free_grid - function frees the memory alloc
 * @grid: parameter pointer
 * @height: the height of freeing mem
 * Return: freeing grid
 */
void free_grid(int **grid, int height)
{
	int q;

	if (grid == NULL)
	{
		return;
	}
	for (q = 0; q < height; q++)
	{
		free(grid[q]);
	}
	free(grid);
}
