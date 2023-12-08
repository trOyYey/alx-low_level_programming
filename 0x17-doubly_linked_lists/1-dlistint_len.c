#include "lists.h"

/**
 * dlistint_len - finds number of elements in the linked list
 * @h: header
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
