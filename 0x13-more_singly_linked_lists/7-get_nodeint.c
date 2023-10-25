#include "lists.h"

/**
 * *get_nodeint_at_index - returns the n node of a linked list
 * @head: pointer to head
 * @index: unsigned int
 * Return: nth node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp
	for (tmp = head, i = 0; head != NULL& i < index; i++)
		tmp = tmp->next;
	return (tmp);
}
		
