#include "lists.h"

/**
 * listint_len - counts number of elements in a linked list
 * @h: pointer to listint_t
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
