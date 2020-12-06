#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - main function
 * @s1:parameter
 * @s2:parameter
 * Return: s
 */

char *str_concat(char *s1, char *s2)
{
unsigned int i, z, p, l;
char *s;
if (s1 == NULL)
i = 0;
else
for (i = 0; s1[i]; i++);
if (s2 == NULL)
z = 0;
else
for (z = 0; s2[z]; z++);
p = i + z + 1;
s = malloc(p * sizeof(char));
if (s == NULL)
return (NULL);
for (l = 0; l < i; l++)
s[l] = s1[l];
for (l = 0; l < z; l++)
s[l + i] = s2[l];
s[i + z] = '\0';
return (s);
}
