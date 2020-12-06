#include "holberton.h"

/**
 * _strchr - find a char in a string
 * @s:parameter
 * @c:parameter
 * Return: s
 */

char *_strchr(char *s, char c)
{
do
{

if (*s == c)
{
break;
}
}
while (*s++);
return (s);
}
