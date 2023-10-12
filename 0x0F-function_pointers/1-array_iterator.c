#include "function_pointers.h"

/**
 * void array_iterator - function that executes a function given
*			as a parameter on each element of an array
* @array: int
* @size: size_t
* @action: function to pointer
* Return: voidin
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end;

	*end = array + size - 1;
	if ( array && size && action)
		while (array <= end)
			action(*array++);
}
