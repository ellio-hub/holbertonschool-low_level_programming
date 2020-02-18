#include "holberton.h"
/**
 * _strlen - length of string
 * @s: parameter
 *
 * Return: length
 */
int _strlen(char *s)
{
int x = 0;
while (*s != '\0')
{
s++;
x++;
}
return (x);
}
