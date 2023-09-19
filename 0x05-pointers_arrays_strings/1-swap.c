#include "main.h"

/**
 * swap_int - function that swaps value of two integers
 * @*a: input1
 * @*b: input2
 *Return: nothin
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
