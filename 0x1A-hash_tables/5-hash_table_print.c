#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: ponter to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	int p = 0;

	if (ht == NULL)
		return;
	putchar('{');
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x])
		{
			print_hash_node(ht->array[x], &p);
		}
	}
	putchar('}');
	putchar('\n');
}

/**
 * print_hash_node - prints hash nodes
 * @head: ponter to linked list
 * @p: pointer
 * Return: 0 if succ 1 otherwise
 */

void print_hash_node(hash_node_t *head, int *p)
{
	hash_node_t *clone;

	for (clone = head; clone; clone = clone->next)
	{
		if (*p)
		{
			putchar(',');
			putchar(' ');
		}
		else
			*p = 1;
		printf("'%s': '%s'", clone->key, clone->value);
	}
}
