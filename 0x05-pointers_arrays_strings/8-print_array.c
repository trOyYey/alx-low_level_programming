#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 *@n: number of elements in the array to be printed
 *@a: arrays to use
 *Return: nothin
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
