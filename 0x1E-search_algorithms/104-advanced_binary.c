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
 * advanced_binrecur - recursive part of binary search function
 * @array: array to search
 * @first: first index in the array to search
 * @last: last index in the array to search
 * @value: the value to search for
 * Return: recursively mid or -1
 */

int advanced_binrecur(int *array, size_t first, size_t last, int value)
{
	int mid = (last - first) / 2 + first;

	if (last < first)
		return (-1);
	print_list(array, first, last);
	if (array[mid] > value || (mid != 0 && array[mid - 1] == value))
		return (advanced_binrecur(array, first, mid, value));
	else if (array[mid] == value)
		return (mid);
	else
		return (advanced_binrecur(array, mid + 1, last, value));
}

/**
 * advanced_binary - function that uses binary search algo to find a value
 * @array: pointer to the start of the arrayy
 * @size: size of the array
 * @value: value to search for
 * Return: index of the array that equals value
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);

	index = advanced_binrecur(array, 0, size - 1, value);

	return (index);
}
