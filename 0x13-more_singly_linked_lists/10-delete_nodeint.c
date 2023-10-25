#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer of pointer to linked list
 * @index: unsigned int
 * Return: 1 if succeeeded -1 if not 
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp1, *tmp2;
	unsigned int i = 0;

	if (!*head || !head)
		return (-1);

	if (!index)
	{
		tmp1 = *head;
		*head = (*head)->next;
		free(tmp1);
		return (1);
	}

	tmp1 = *head;
	while (tmp1)
	{
		if (i == index)
		{
			tmp2->next = tmp1->next;
			free(tmp1);
			return (1);
		}
		i++;
		tmp2 = tmp1;
		tmp1 = tmp1->next;
	}
	return (-1);
}
