#include "search_algos.h"


/**
 * iterate_list - function which iterates throughout the list
 * @list: pointer to node
 * @step: number of iteration through the list
 * Return: pointer to the next node
 */

listint_t *iterate_list(listint_t *list, size_t step)
{
	listint_t *node = list;

	while (node->next && step)
	{
		step--;
		node = node->next;
	}
	return (node);
}

/**
 * jump_list - jump search function in single linked list
 * @list: pointer to the array
 * @size: size o the array
 * @value: the value to search for
 * Return: if found index of the value or NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *i, *j;
	size_t step = (size_t) sqrt(size);

	if (list == NULL)
		return (NULL);
	i = list;
	while (i->index < size)
	{
		j = iterate_list(i, step);
		printf("Value checked at index [%ld] = [%d]\n", j->index, j->n);
		if (value <= j->n || j->next == NULL)
			break;
		i = j;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i->index, j->index);

	while (i != NULL && i != j->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", i->index,
			i->n);
		if (i->n == value)
			return (i);
		i = i->next;
	}
	return (NULL);
}
