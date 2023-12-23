#include "hash_tables.h"


/**
 * key_index - get the index of the key
 *
 * @key: pointer to first character of key
 * @size: hash table size
 *
 * Return: index of the key
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
