#include "main.h"
#include <stdio.h>

/**
 * *array_range - function that creates an array of integers
 * @min: int
 * @max: int
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *P, S, i;

	if (min > max)
		return (NULL);
	S = max - min + 1;
	P = malloc(sizeof(int) * S );
	if (P == NULL)
		return (NULL);
	for (i = 0; i < S; i++)
		P[i] = min++;
	return (P);
}
