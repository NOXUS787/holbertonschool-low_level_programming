#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: Pointer to the hash table
 * @key: Key string (must not be empty)
 * @value: Value associated with the key
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	char *value_dup;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = value_dup;
			return (1);
		}
		node = node->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_dup);
		return (0);
	}

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(value_dup);
		free(node);
		return (0);
	}

	node->value = value_dup;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
