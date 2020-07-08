#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - 2 dimensional array of int
 * @width: columns
 * @height: rows
 *
 *Return: p or NULL
 */
int **alloc_grid(int width, int height)
{
	char **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
}
