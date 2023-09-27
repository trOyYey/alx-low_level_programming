#include "main.h"

/**
 * print_diagsums - function that prints the sum of two diagonals
 * @a: input
 * @size: the size
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum2);
	printf("%d\n", sum2);
}
