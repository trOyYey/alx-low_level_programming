#include "lists.h"

/**
 * *reverse_listint - function that reverses linked list
 * @head: pointer
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	
	listint_t *before, *node;

	if (!head || !*head)
		return (NULL);
	before = *head;
	node = before->next;
	before->next = NULL;
	while (node)
	{
		*head = node->next;
		node->next = before;
		before = node;
		node = *head;
	}
	*head = before;
	return (*head);
}
