#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hashtable
 * @size: size of table
 * Return: hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;

	if (!size)
		return (NULL);

	hashtable = calloc(1, sizeof(hash_table_t));
	if (!hashtable)
		return (NULL);

	hashtable->size = size;
	hashtable->array = calloc(size, sizeof(hash_node_t *));

	if (!hashtable->array)
	{
		free(hashtable);
		return (NULL);
	}
	return (hashtable);
}
