#include "lists.h"

/**
 * re_alloc_array - allocates memory for array of pointers in linked list
 * @size: new size of list
 * @list: last list
 * @new_node: new node to insert ino the linked list
 */

const listint_t **re_alloc_array(cont listint_t **list, size_t size, const listint_t *new_node)
{
	size_t;
	const listint_t **tmp;

	tmp1 = malloc(size * sizeof(listint_t *));
	if (tmp == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		tmp[i] = list[i];
	tmp[i] = new_node;
	free(list);
	return (tmp);
}

/**
 * print_listint_safe - function that prints listint_t linked list
 * @head: pointer to head of linked list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t **temp = NULL;
	size_t i, itr = 0;

	while (head)
	{
		for (i = 0; i < itr; i++)
		{
			if (head == temp[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(temp);
				return (itr);
			}
		}
		itr++;
		temp = re_alocc_array(temp, itr, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(temp);
	return (itr);
}
