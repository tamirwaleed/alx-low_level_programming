#include "hash_tables.h"

/**
 * hash_djb2 - hash function with the djb2 algorithm
 * @str: string to be hashed
 * Return: the hashed value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
