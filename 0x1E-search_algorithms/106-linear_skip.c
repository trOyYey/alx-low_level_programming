#include "search_algos.h"


/**
 * linear_skip - jump search algo in a skiplist
 * @list: pointer to skiplist
 * @value: value to search for
 * Return: index of the value or -1
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *i, *j;

	if (list == NULL)
		return (NULL);
	i = list;
	while (i->next)
	{
		j = i->express;
		printf("Value checked at index [%ld] = [%d]\n", j->index, j->n);
		if (value <= j->n)
			break;
		else if (j->express == NULL)
		{
			i = j;
			while (j->next)
				j = j->next;
			break;
		}
		i = j;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		i->index, j->index);
	while (i != NULL && i != j->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", i->index, i->n);
		if (i->n == value)
			return (i);
		i = i->next;
	}
	return (NULL);
}
