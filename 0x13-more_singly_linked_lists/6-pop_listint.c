#include "lists.h"

/**
 * pop_listint - deketes the head node of listint_t linked list
 * @head: pointer to head of linked list
 * Return: head node data n
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (!*head || !head)
		return (NULL);

	tmp = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = tmp;
	return (i);
}
