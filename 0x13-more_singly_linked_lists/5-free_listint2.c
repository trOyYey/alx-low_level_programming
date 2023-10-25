#include "lists.h"

/**
 * free_listint2 - function that frees listint_t and sets head to null
 * @head: pointer to linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp1, *tmp2;

	if (!head)
		return;

	tmp1 = *head;
	while (tmp1)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		free(tmp2);
	}
	*head = NULL;
}
