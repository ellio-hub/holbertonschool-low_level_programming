#include "hash_tables.h"
/**
 * hash_djb2 - implementation of djb2
 * @str: parameter
 *
 * Return: string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int t;
int i;
t = 5381;
while ((i = *str++))
t = ((t << 5) + t) + i;
return (t);
}
