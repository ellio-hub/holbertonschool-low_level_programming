#include "hash_tables.h"
/**
 * key_index - return index of a key
 * @key: parameter
 * @size: size of hash table
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int s, i;
s = hash_djb2(key);
i = s % size;
return (i);
}
