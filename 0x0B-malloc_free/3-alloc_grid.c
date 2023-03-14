#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: this is use to measure the width
 * @height: this is used o measure the height
 * Return: on failure, give NULL
 */
int **alloc_grid(int width, int height)
{
	{
	int **fell;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	fell = malloc(sizeof(int *) * height);

	if (fell == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		fell[x] = malloc(sizeof(int) * width);

		if (fell[x] == NULL)
		{
			for (; x >= 0; x--)
				free(fell[x]);
			free(fell);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			fell[x][y] = 0;
	}
	return (fell);
}
}
