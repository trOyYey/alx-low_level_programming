#include "lists.h"

/**
 * free_list - frees list_t list
 * @head: pointer to head
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *i = head;

	while (i)
	{
		i = i->next;
		free(head->str);
		free(head);
		head = i;
	}
}
