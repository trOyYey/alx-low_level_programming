#include "hash_tables.h"

/**
 * hash_table_get - get elemnt from hash table
 *
 * @ht: ponter to teh hash table
 * @key: pointer to key
 *
 * Return: value or NULL
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *clone;
	unsigned long int x;

	if (!ht || !ht->array || !ht->size 
			|| !key || strlen(key) == 0)
		return (NULL);
	x = key_index((const unsigned char *)key, ht->size);
	clone = ht->array[x];
	while (clone)
	{
		if (strcmp(clone->key, key) == 0)
			return (clone->value);
		clone = clone->next;
	}
	return (NULL);
}
