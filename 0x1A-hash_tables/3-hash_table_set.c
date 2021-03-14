
#include "hash_tables.h"

/**
 * hash_table_set - add element hash table
 * @ht: hash table
 * @key: parameter
 * @value: parameter
 *
 * Return: 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index, size;
hash_node_t *node, *tmp;
if (!key || !value || !ht)
return (0);
size = ht->size;
index = key_index((const unsigned char *)key, size);
tmp = ht->array[index];
while (tmp)
{
if (tmp && strcmp(key, tmp->key) == 0)
{
free(tmp->value);
tmp->value = strdup(value);
if (tmp->value == NULL)
return (0);
return (1);
}
tmp = tmp->next;
}
node = malloc(sizeof(hash_node_t));
if (node == NULL)
return (0);
node->key = strdup(key);
if (node->key == NULL)
return (0);
node->value = strdup(value);
if (node->value == NULL)
return (0);
node->next = ht->array[index];
ht->array[index] = node;
return (1);
}
