#include "hash_tables.h"

/**
 * hash_table_delete - deletes the table
 * @ht: the table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (!ht || ht->array == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i]->next;
		free(ht->array[i]->key);
		free(ht->array[i]->value);
		free(ht->array[i]);
		ht->array[i] = tmp;
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
