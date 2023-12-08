#include "lists.h"

/**
 * get_dnodeint_at_index -  gets nth node of linked list
 * @head: head
 * @index: index of node
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; head && j < index; head = head->next, j++)
		;

	if (j == index)
		return (head);
	else
		return (NULL);
}
