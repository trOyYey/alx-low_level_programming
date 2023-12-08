#include "lists.h"

/**
 * add_dnodeint - adds new node at start
 * @h: head
 * @n: stored int
 * Return: address of new node, or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *fresh = malloc(sizeof(dlistint_t));

	if (!fresh || !head)
		return (fresh ? free(fresh), NULL : NULL);

	fresh->n = n;
	fresh->prev = NULL;
	fresh->next = *head;
	if (!*head)
		(*head)->prev = fresh;
	*head = fresh;

	return (fresh);
}
