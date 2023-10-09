#include "main.h"
#include <stdio.h>

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size of old memory in bytes
 * @new_size: size of new memory in bytes
 * Return: ptr if success, NULL if not
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p + 1) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
}
