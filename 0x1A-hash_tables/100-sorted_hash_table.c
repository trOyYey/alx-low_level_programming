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
	hash_table_t *sorted_ht = malloc(sizeof(hash_table_t));

	if (!sorted_ht)
		return (NULL);
	sorted_ht->size = size;
	sorted_ht->shead = NULL;
	sorted_ht->stail = NULL;
	sorted_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!sorted_ht->array)
	{
		free(sorted_ht);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		sorted_ht->array[x] = NULL;
	return (sorted_ht);
}

/**
 * shash_table_set - set sorted hash table
 * @ht: ponter to teh shash table
 * @key: key pointer
 * @value: pointer to value
 * Return: 1 if succ 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *temp, *sorted_hn;
	unsigned long int idx;

	if (!ht || !ht->array || hti->size == 0 || value == NULL || strlen(key) == 0 || key == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	for (temp = ht->array[idx]; temp; temp = temp->next)
	{
		if (!strcmp(key, temp->key))
		{
			free(temp->value);
			temp->value = strdup(value);
			if (!temp->value)
				return (0);
			return (1);
		}
	}
	sorted_hn = malloc(sizeof(shash_node_t));
	if (!sorted_hn)
		return (NULL);
	sorted_hn->value = strdup(value);
	if (!sorted_hn->value)
	{
		free(sorted_hn);
		return (NULL);
	}
	sorted_hn->key = strdup(key);
	if (!sorted_hn->key)
	{
		free(sorted_hn->value);
		free(sorted_hn);
		return (NULL);
	}
	sorted_hn->next = ht->array[idx], sorted_hn->snext = sorted_hn->sprev = NULL;
	ht->array[idx] = sorted_hn;
	add_into_sorted_list(ht, sorted_hn);
	return (1);
}

/**
 * add_into_sorted_list - function that adds node into sorted list
 * @ht: hash table
 * @node: node to be inserted and sorted
 */

void add_into_sorted_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp;

	if (!ht->shead && !ht->stail)
	{
		ht->shead = ht->stail = node;
		return;
	}
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(node->key, temp->key) < 0)
		{
			node->snext = temp;
			node->sprev = temp->sprev;
			temp->sprev = node;
			if (node->sprev)
				node->sprev->snext = node;
			else
				ht->shead = node;
			return;
		}
		temp = temp->snext;
	}
	node->sprev = ht->stail;
	ht->stail->snext = node;
	ht->stail = node;
}

/**
 * shash_table_get - gets element from hashed table
 * @ht: shash table pointer
 * @key: pointer to key
 * Return: value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int x;

	if (!ht)
		return (NULL);
	x = key_index((const unsigned char *)key, ht->size);
	for (temp = ht->array[x]; temp; temp = temp->next)
	{
		if (!strcmp(key, temp->key))
		{
			return (temp->value);
		}
	}

	return (NULL);
}

/**
 * shash_table_print - prints the hashed table
 * @ht: hashed table pointer
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	int x = 0;

	if (!ht)
		return;
	putchar('{');
	for (temp = ht->shead; temp; temp = temp->snext)
	{
		if (x++)
		{
			putchar(',');
			putchar(' ');
		}
		printf("'%s': '%s'", temp->key, temp->value);
	}
	putchar('}');
	putchar('\n');
}

/**
 * shash_table_print_rev - prints shash table in reverse
 * @ht: hashed table pointer
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	int x = 0;

	if (!ht)
		return;
	putchar('{');
	for (temp = ht->stail; temp; temp = temp->sprev)
	{
		if (x++)
		{
			putchar(',');
			putchar(' ');
		}
		printf("'%s': '%s'", temp->key, temp->value);
	}
	putchar('}');
	putchar('\n');
}

/**
 * shash_table_delete - deletes hashed table
 * @ht: ponter to the shash table
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *temp2;

	if (!ht)
		return;
	for (temp = ht->shead; temp; temp = temp2)
	{
		temp2 = temp->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}

	free(ht->array);
	free(ht);
}
