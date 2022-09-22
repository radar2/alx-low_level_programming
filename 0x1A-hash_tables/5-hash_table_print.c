 532 Bytes

#include "hash_tables.h"

/**
 * hash_table_print - print the key value pairs in a hash table
 * @ht: table given
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *hnode;
	int flag = 1;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		for (hnode = ht->array[i]; hnode; hnode = hnode->next)
		{
			if (flag)
			{
				printf("'%s': '%s'", hnode->key, hnode->value);
				flag = 0;
			}
			else
				printf(", '%s': '%s'", hnode->key, hnode->value);
		}
	}
	printf("}\n");
}
