#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the table
 * @ht: pointer to the hash table
 * @key: the key
 * @value: the value
 * Return: 1 if success, 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;
	unsigned long int index;
	char *new_val;

	if (!ht || !(ht->array) || !(ht->size) ||
	    !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_val = strdup(value);
			if (!new_val)
				return (0);
			free(tmp->value);
			tmp->value = new_val;
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
