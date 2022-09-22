#include "hash_tables.h"

/**
 * hash_table_delete - delete entire hash table
 * @ht: table passed
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *hnode, *tmp = NULL;

	if (!ht)
		return;

	for (i = 0; i < ht->size; ++i)
	{
		if (ht->array[i])
		{
			for (hnode = ht->array[i]; hnode; )
			{
				free(hnode->key);
				hnode->key = NULL;
				free(hnode->value);
				tmp = hnode;
				hnode = hnode->next;
				free(tmp);
			}
		}
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
