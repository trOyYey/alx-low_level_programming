#include "function_pointers.h"

/**
 * function that searches for an integer
 * @array: int
 * @size: int
 * @cmp: pointer to function
 * Return: index if not 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
