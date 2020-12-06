#include "holberton.h"

/**
 * rot13 - rot13
 * @c: parameter
 * Return: string
 */

char *rot13(char *c)
{
int j, i = 0;
char a[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char b[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
while (c[i] != '\0')
{
for (j = 0; j <= 51; j++)
if (c[i] == a[j])
{
c[i] = b[j];
break;
}
i++;
}
return (c);
}
