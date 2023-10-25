#include "list.h"

/**
 * sum_listint - sum of all the data n of a linked list
 * @head: pointer to linked list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int result = 0;

	while (head)
	{
		result += head->n;
		head = head->next;
	}
	return (sum);
}
