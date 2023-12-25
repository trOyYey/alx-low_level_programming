#include "hash_tables.h"

/**
 * hash_table_delete - deletes specified hash table
 * @ht: the desired to delete hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int itr;
	
	if (!ht || !ht->array || ht->size == 0)
		return;
	for (itr = 0; itr < ht->size; itr++)
	{
		if (ht->array[itr])
		{
			n = ht->array[itr]->next;
			free(ht->array[itr]->value);
			free(ht->array[itr]->key);
			free(ht->array[itr]);
			ht->array[itr] = n;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
