#include "lists.h"

/**
 * add_nodeint - inserts a new node at the begining
 * @head: pointer to beginning of linked lists
 * @n: new node value
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start_node = malloc(sizeof(listint_t));

	if (head == NULL || start_node == NULL)
		return (NULL);

	start_node->next = NULL;
	start_node->n = n;

	if (*head != NULL)
		start_node->next = *head;
	*head = new_node;
	return (new_node);
}
