#include "hash_tables.h"

/**
 * hash_table_create - creates hash_table
 * @size: size of hash table array
 *
 * Return: pointer to the new table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x;
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		new_table->array[x] = NULL;
	return (new_table);
}
