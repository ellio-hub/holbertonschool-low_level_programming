#include "hash_tables.h"
/**
 * hash_table_print - prints hashtable
 * @ht: hashtable
 *
 * Return: a print of hashtable
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
int j = 0;
if (!ht)
return;
printf("{");
for (i = 0; i <= ht->size; i++)
if (ht->array[i])
while (ht->array[i])
{
if (j != 0)
printf(", ");
printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
j = 1;
ht->array[i] = ht->array[i]->next;
}
printf("}\n");
}
