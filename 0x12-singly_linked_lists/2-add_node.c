#include "lists.h"

/**
 * *add_node - function that adds new node at the end of a list
 * @head:pointer to pointer to the head
 * @str: string to fullfil
 * Return: Null or new elemnt&
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *i = malloc(sizeof(list_t));

	if (!i)
		return (NULL);

	i->str = strdup(str);
	i->next = *head;
	i->len = len(str);
	*head = i;

	return (i);
}
