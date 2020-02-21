#include "holberton.h"
/**
 * _strncpy - concate 2 strings
 * @src: parameter
 * @dest: parameter
 * @n: parameter
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
int l;
for (l = 0; dest[l] != '\0'; l++)
{
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
