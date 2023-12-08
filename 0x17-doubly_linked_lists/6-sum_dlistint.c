#include "lists.h"

/**
 * sum_dlistint -  sum of all n in given lists
 * @head: head
 * Return: sum of all n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;

	return (sum);
}
