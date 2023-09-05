# include "main.h"
# include <stdlib.h>

/**
 * free_grid - function to free the 2d array
 * i: input
 * @height: input
 * @grid: 2d array pointer to pointer to int
 * Description: function to free the 2d array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int i;

grid = malloc(sizeof(int *) * height);
for (i = 0; i < height; i++)
	free(grid[i]);
	free(grid);
}
