#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_set - set an entry
 * @key: given identifier
 * @value: value of identifier
 * @ht: table passed
 * Return: 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *hashnode = NULL, *insert = NULL;

	if (!key || !ht || !value || !*key)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	hashnode = ht->array[idx];
	while (hashnode != NULL)
	{
		if (strcmp(hashnode->key, key) == 0)
		{
			if (!hashnode->value)
				return (0);
			free(hashnode->value);
			hashnode->value = strdup(value);
			return (1);
		}
		hashnode = hashnode->next;
	}
	insert = calloc(1, sizeof(hash_node_t));
	if (!insert)
		return (0);
	insert->key = strdup(key);
	if (!insert->key)
	{
		free(insert);
		return (0);
	}
	insert->value = strdup(value);
	if (!insert->value)
	{
		free(insert->key);
		free(insert);
		return (0);
	}
	insert->next = ht->array[idx];
	ht->array[idx] = insert;
	return (1);
}
