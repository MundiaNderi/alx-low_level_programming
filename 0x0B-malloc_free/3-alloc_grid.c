#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: takes in width of the grid.
 * @height: height of the grid.
 * Return: grid with freed spaces.
*/
int **alloc_grid(int width, int height)
{
	int **gridout;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	gridout = malloc(sizeof(int *) * height);
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		gridout[i] = malloc(sizeof(int) * width);
		if (gridout[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(gridout[i]);
			free(gridout);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridout[i][j] = 0;
	return (gridout);
}
