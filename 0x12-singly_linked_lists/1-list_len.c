#include "lists.h"

/**
 * list_len function that returns the number of elements in linked list
 * @h: list_t
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0 ;h != NULL; i++, h = h->next)
		;
	return (i);
}
