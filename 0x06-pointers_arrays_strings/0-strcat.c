#include "holberton.h"
/**
 * _strcat - concate 2 strings
 * @src: parameter
 * @dest: parameter
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
int i;
int l;
for (l = 0; dest[l] != '\0'; l++)
{
}
for (i = 0; src[i] != '\0'; i++)
{
dest[l + i] = src[i];
}
dest[l + i] = '\0';
return (dest);
}
