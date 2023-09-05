# include "main.h"
# include <stdlib.h>

/**
 * free_grid - function to free the 2d array
 * allocated by alloc_grid()
 * i: input
 * @height: input
 * @grid: 2d array pointer to pointer to int
 * Description: function to free the 2d array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL)
	return;

for (i = 0; i < height; i++){
	free(grid[i]);
}
	free(grid);
}
