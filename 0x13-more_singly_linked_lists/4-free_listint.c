#include "lists.h"

/**
 * free_listint - function that frees listint_t list
 * @head: pointer to linked list
 * Return: voidin
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
