#include "search_algos.h"


/**
 * print_list - prints alist
 * @array: pointer to array
 * @first: first  index of the array to print
 * @last: last index of the array to print
 */

void print_list(int *array, size_t first, size_t last)
{
	printf("Searching in array: ");
	while (first < last)
	{
		printf("%d, ", array[first]);
		first++;
	}
	printf("%d\n", array[first]);
}

/**
 * recursive_binary - recursive part of binary search function
 * @array: array to search
 * @first: first index in the array to search
 * @last: last index in the array to search
 * @value: the value to search for
 * Return: recursively mid or -1
 */

int recursive_binary(int *array, size_t first, size_t last, int value)
{
	int mid = (last - first) / 2 + first;

	if (last < first)
		return (-1);
	print_list(array, first, last);
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (recursive_binary(array, first, mid - 1, value));
	else
		return (recursive_binary(array, mid + 1, last, value));
}

/**
 * exponential_search - function do as the name suggests
 * @array: pointer to the array
 * @size: ae
 * @value: the value to look for
 * Return: index of the element that contains the value
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, start = 0;

	if (array == NULL)
		return (-1);
	i = 1;
	while (i < size)
	{
		if (value <= array[i])
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		start = i;
		i = i * 2;
	}
	if (i >= size)
		i = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", start, i);
	return (recursive_binary(array, start, i, value));
}
