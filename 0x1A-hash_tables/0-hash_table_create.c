#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: number of nodes in the table
 * Return: pointer to the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(size * sizeof(hash_node_t *));
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}
