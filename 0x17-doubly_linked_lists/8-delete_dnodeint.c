#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes node at index
 * @head: head
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int j;
	dlistint_t *ptr = *head, *temp = NULL;

	for (j = 0; ptr && j < index; ptr = ptr->next, j++)
		temp = ptr;

	if (j == index && ptr)
	{
		if (temp)
			temp->next = ptr->next;
		if (ptr->next)
			ptr->next->prev = temp;
		if (j == 0)
			*head = ptr->next;
		free(ptr);
		return (1);
	}
	else
		return (-1);
}
