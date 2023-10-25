#include "list.h"

/**
 * sum_listint - sum of all the data n of a linked list
 * @head: pointer to linked list
 * Return: sum
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
