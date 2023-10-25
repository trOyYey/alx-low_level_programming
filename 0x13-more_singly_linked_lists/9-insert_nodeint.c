#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to pointer to linked list
 * @idx: index unsigned int
 * @n: n
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp1, *tmp2 = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!tmp2 || !head)
		return (NULL);

	tmp2->n = n;
	tmp2->next = NULL;

	if (!idx)		/* checks if idx has value */
	{
		tmp2->next = *head;
		*head = tmp2;
		return (tmp2);
	}
	tmp1 = *head;
	while (tmp1)
	{
		if (i == idx - 1)
		{
			tmp2->next = tmp1->next;
			tmp1->next = tmp2;
			return (tmp2);
		}
		i++;
		tmp1 = tmp1->next;
	}
	free(tmp2);
	return (NULL);
}
