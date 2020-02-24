#include "holberton.h"
/**
 * _memset - fill memory with constant byte
 * @n: parameter
 * @s: parameter
 * @byt: parameter
 *
 * Return: s
 */
char *_memset(char *s, char byt, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = byt;
return (s);
}
