#include "search_algos.h"

/**
 * interpolation_search - interpolation search function
 * @array: pointer to the array
 * @size: size of the array
 * @value: value of the element to look for
 * Return: index of the element that equals to value or -1 if that fails
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t L = 0, H = size - 1, P;

	if (array == NULL)
		return (-1);
	do {
		P = L + (((double) (value - array[L]) /
			(array[H] - array[L])) * (H - L));
		printf("Value checked array[%ld] ", P);
		if (P > H || P < L)
		{
			printf("is out of range\n");
			return (-1);
		}
		printf("= [%d]\n", array[P]);
		if (value == array[P])
			return ((int) P);
		else if (value > array[P])
			L = P + 1;
		else
			H = P - 1;
	} while (value >= array[L] && value <= array[H] && H >= L);
	printf("is out of range\n");
	return (-1);
}
