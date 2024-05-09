#include "search_algos.h"


/**
 * linear_search - linear search function to find a value
 * @array: pointer to the start of an array
 * @size: size of the array
 * @value: value to search for in the array
 * Return: index of the value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int) i);
		i++;
	}
	return (-1);
}
