#include "hash_tables.h"

/**
 * hash_table_get - return value for given key
 * @ht: table passed
 * @key: key to search with
 * Return: key's value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hashnode;
	unsigned int idx;


	if (!key || !ht)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	hashnode = ht->array[idx];

	while (hashnode)
	{
		if (strcmp(hashnode->key, key) == 0)
		{
			return (hashnode->value);
		}
		hashnode = hashnode->next;
	}
	return (NULL);
}
