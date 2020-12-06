#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **argstostr - main function
 *@ac : parameter
 *@av : parameter
 *Return: c
 */

char *argstostr(int ac, char **av)
{
int f, y, i, w;
int l = 0;
int a = 0;
char *c;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; (i < ac); i++)
{
for (w = 0; av[i][w] != '\0'; w++)
l++;
l++;
}
c = malloc(sizeof(char) * l + 1);
if (c == NULL)
return (NULL);
for (f = 0; f < ac ; f++)
{
for (y = 0; av[f][y] != '\0'; y++)
{
c[a] = av[f][y];
a++;
}
c[a++] = '\n';
}
c[a] = '\0';
return (c);
}
