#include "holberton.h"

/**
 * cap_string - capitalize a string
 * @c: parameter
 * Return: string
 */

char *cap_string(char *c)
{
int j, i = 0;
char a[13] = " \t\n,;.!?\"(){}";
while (c[i] != '\0')
{
if (c[i] >= 97 && c[i] <= 122)
{
for (j = 0; j <= 12; j++)
if (c[i - 1] == a[j] || i == 0)
{
c[i] = c[i] - 32;
break;
}
}
i++;
}
return (c);
}
