#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: head
 * @idx: index
 * @n: value of n in list
 * Return: node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int j;
	dlistint_t *N, *head = *h, *temp = NULL;

	for (j = 0; head && j < idx; head = head->next, j++)
		temp = head;

	if (j == idx)
	{
		N = malloc(sizeof(dlistint_t));
		if (!N)
			return (N);
		N->n = n, N->prev = NULL, N->next = NULL;
		if (head || temp || !idx)
		{
			N->next = head;
			if (temp)
				temp->next = N;
			else
				*h = N;
			N->prev = temp;
			if (head)
				head->prev = N;
		}
		return (N);
	}
	else
		return (NULL);
}
