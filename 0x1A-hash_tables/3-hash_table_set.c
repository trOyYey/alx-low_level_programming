#include "hash_tables.h"

/**
 * hash_table_set - add Element to the hash table
 * @ht: ponter to the hash table
 * @key: pointer to the key
 * @value: pointer to the value
 * Return: 1 if succeeded 0 other wise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int x;

	if (!ht || !key || strlen(key) == 0)
		return (0);
	x = key_index((const unsigned char *)key, ht->size);
	if (add_hash_node(&ht->array[x], key, value))
		return (0);
	return (1);
}

/**
 * add_hash_node - adds a new hash node at start of a list
 * @head: ponter to a linked list
 * @key: pointer to the key
 * @value: pointer to the value
 * Return: 0 if no error, or 1
 */

int add_hash_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *clone;

	for (clone = *head; clone; clone = clone->next)
	{
		if (!strcmp(key, clone->key))
		{
			free(clone->value);
			clone->value = strdup(value);
			return (0);
		}
	}



	clone = malloc(sizeof(hash_node_t));
	if (!clone)
		return (1);

	clone->value = strdup(value);
	clone->next = *head;
	clone->key = strdup(key);

	*head = clone;
	return (0);
}
