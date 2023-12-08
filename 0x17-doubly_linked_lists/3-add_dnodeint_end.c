#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at end
 * @head: head
 * @n: the value
 * Return: address of the new element, or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *N = malloc(sizeof(dlistint_t));

	if (!head || !N)
		return (N ? free(N), NULL : NULL);

	N->next = NULL;
	N->n = n;
	if (!*head)
	{
		N->prev = NULL;
		*head = N;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = N;
		N->prev = tmp;
	}
	return (N);
}

