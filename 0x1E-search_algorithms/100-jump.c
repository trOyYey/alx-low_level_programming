#include "search_algos.h"

/**
 * jump_search - jump search function
 * @array: pointer to the array
 * @size: size o the array
 * @value: the value to search for
 * Return: if found index of the value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, j, step = (size_t) sqrt(size);

	if (array == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (value <= array[i])
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i + step;
	}
	if (i == 0)
		i = step;
	printf("Value found between indexes [%ld] and [%ld]\n", i - step, i);

	for (j = 0; i - step + j < size && j <= step; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", i - step + j,
			array[i - step + j]);
		if (array[i - step + j] == value)
			return ((int) i - step + j);
	}
	return (-1);
}
