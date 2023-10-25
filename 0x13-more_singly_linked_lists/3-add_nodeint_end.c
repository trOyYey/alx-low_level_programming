#include "lists.h"

/**
 * *add_nodeint_end - adds new node at the end of a listint_t list
 * @head: pointer to listint_t
 * @n: const int
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node = malloc(sizeof(listint_t));
	listint_t tmp_node;

	if (!head || !end_node)
		return (NULL);

	end_node->next = NULL;
	end_node->n = n;
	if (!*head)		/* we have been given pointer of pointer to pointer*/
		*head = end_node;
	else
	{
		tmp_node = *head;
		while (tmp_node->next)
			tmp_node = tmp_node->next;
		tmp_node->next = end_node;
	}
	return (end_node);
}
