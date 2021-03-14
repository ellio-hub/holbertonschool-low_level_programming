#include "hash_tables.h"
/**
 * hash_table_create - creates Hash Table
 * @size: size of hashtable
 *
 * Return: hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table;
hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
return (NULL);
hash_table->size = size;
hash_table->array = malloc(sizeof(hash_table->array) * size);
if (hash_table->array == NULL)
return (NULL);
else
return (hash_table);
}
