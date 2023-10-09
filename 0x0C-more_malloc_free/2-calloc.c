#include "main.h"
#include <stdio.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: int
 * @size: unsigned int
 * Return: if nmemb or size is  then returns Null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *P;

	if (nmemb == 0 || size == 0)
		return (NULL);
	P = calloc(nmemb, size);
	if (P == NULL)
		return (NULL);
	else
		return (P);
}
