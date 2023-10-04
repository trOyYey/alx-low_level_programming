#include "main.h"

/**
 * *create_array - function that creates an array of chars and
*			initializes with specific char
*@size: input size
*@c: input character
*Return: Pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (i == 0 || size == 0)
		return (0);

	while (size--)
		i[size] = c;

	return (n);
}
