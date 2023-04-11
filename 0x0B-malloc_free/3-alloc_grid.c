#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **alx;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	alx = malloc(sizeof(int *) * height);

	if (alx == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		alx[x] = malloc(sizeof(int) * width);

		if (alx[x] == NULL)
		{
			for (; x >= 0; x--)
				free(alx[x]);

			free(alx);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			alx[x][y] = 0;
	}

	return (alx);
}
