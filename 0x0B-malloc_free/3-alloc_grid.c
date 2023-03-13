#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - a function that returns a pointer to a 2 dimensional array
 * @width: input value
 * @height: input value
 * Return: a pointer to a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **di;
	int hi, wi;

	if (width <= 0 || height <= 0)
		return (NULL);
	di = malloc(sizeof(int *) * hi);
	if (di == NULL)
		return (NULL);
	for (hi = 0; hi < height; hi++)
	{
		di[hi] = malloc(sizeof(int) * width);
			if (di[hi] == NULL)
			return (NULL);
	}

	{
	free(di[hi]);
	free(di);
	return (NULL);
	}
	for (hi = 0; hi < height; hi++)
	{
		for (wi = 0; wi < width; wi++)
			di[hi][wi] = 0;
	}

	return (di);
}
