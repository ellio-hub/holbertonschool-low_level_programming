#include "hash_tables.h"
/**
 * hash_table_get - find value of a key
 * @ht: hashtable
 * @key: parameter
 *
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int i;
hash_node_t *node;
if (!ht || !key)
return (NULL);
i = key_index((const unsigned char *)key, ht->size);
node = ht->array[i];
while (node)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
