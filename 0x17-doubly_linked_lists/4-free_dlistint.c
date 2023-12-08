#include "lists.h"

/**
 * free_dlistint -  frees all lists
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
