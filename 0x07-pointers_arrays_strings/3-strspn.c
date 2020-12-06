#include "holberton.h"

/**
 * _strspn - find length
 * @s:parameter
 * @accept:parameter
 * Return: p
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
unsigned int p = 0;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
p++;
break;
}
else if (accept[i + 1] == '\0')
{
return (p);
}
}
s++;
}
return (p);
}
