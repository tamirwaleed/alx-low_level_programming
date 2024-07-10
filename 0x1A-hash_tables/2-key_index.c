#include "hash_tables.h"

/**
 * key_index- returns the index
 * @key: the key of the value whose index is required
 * @size: size of the hash table
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
