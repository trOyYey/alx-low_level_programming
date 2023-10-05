#include "main.h"

/**
 * **alloc_grid - function that returns a pointer
*			to a 2 dimensional array of entegers
 *@width: input width of array
 *@height: input height of array
 *Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **table, i, j;
	table = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || table == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			table[i] = malloc(sizeof(**table) * width);
			if (table[i] == 0)
			{
				while (i--)
					free(table[i]);
				free(table);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				table[i][j] = 0;
		}
	}
	return (table);
}
