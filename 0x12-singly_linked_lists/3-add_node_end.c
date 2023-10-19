#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t
 * @head: pointer to pointer to head
 * @str: string
 * Return: address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i, *new_end = malloc(sizeof(list_t));

	if (!new_end)
		return (NULL);
	new_end->str = strdup(str);
	new_end->len = len(str);
	new_end->next = NULL;

	if (*head)
	{
		for (i = *head; i->next != NULL; i = i->next)
			;
		i->next = new_end;
	}
	else
	{
		*head = new_end;
	}
	return (new_end);
}
