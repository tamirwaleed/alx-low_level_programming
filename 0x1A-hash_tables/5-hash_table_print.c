#include "hash_tables.h"

/**
 * hash_table_print - printd the table
 * @ht: the table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char check = 0;

	if (!ht || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (check == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			check = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
