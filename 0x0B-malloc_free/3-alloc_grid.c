#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr  = malloc(height * sizeof(int));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			free(ptr);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			ptr[i][k] = 0;
	}
	return (ptr);
}
