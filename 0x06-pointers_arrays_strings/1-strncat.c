#include "holberton.h"
/**
 * _strncat - concate 2 strings
 * @src: parameter
 * @dest: parameter
 * @n: parameter
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int l;
for (l = 0; dest[l] != '\0'; l++)
{
}
for (i = 0; i <= n - 1; i++)
{
dest[l + i] = src[i];
}
dest[l + i] = '\0';
return (dest);
}
