#include "holberton.h"

/**
 * leet - 31337
 * @c: parameter
 * Return: string
 */

char *leet(char *c)
{
int j, i = 0;
char a[5] = "aeotl";
char b[5] = "43071";
while (c[i] != '\0')
{
for (j = 0; j <= 4; j++)
if (c[i] == a[j] || c[i] == (a[j] - 32))
c[i] = b[j];
i++;
}
return (c);
}
