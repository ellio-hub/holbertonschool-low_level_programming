#include "holberton.h"

/**
 * _memcpy - copy  memory adress
 * @dest:parameter
 * @src:parameter
 * @n:parameter
 * Return:char pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
