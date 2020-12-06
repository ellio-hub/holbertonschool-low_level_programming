#include "holberton.h"

/**
 * infinite_add - add numbers
 * @n1:parameter
 * @n2:parameter
 * @r:parameter
 * @size_r:parameter
 * Return: 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int d, s, m, n;
int i = 0;
int x = 0;
while (n1[i])
i++;
while (n2[x])
x++;
if (i > size_r || x > size_r)
return (0);
m = 0;
for (i = i - 1, x = x - 1, d = 0; d < size_r - 1; i--, x--, d++)
{
n = m;
if (i >= 0)
n += n1[i] - '0';
if (x >= 0)
n += n2[x] - '0';
if (i < 0 && x < 0 && n == 0)
{
break;
}
m = n / 10;
r[d] = n % 10 + '0';
}
r[d] = '\0';
if (i >= 0 || x >= 0 || m)
return (0);
for (d -= 1, s = 0; s < d; d--, s++)
{
m = r[d];
r[d] = r[s];
r[s] = m;
}
return (r);
}
