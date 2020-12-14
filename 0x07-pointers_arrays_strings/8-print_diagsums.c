#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - sum of 2 diags
 * @a:parameter
 * @size:parameter
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i, x = 0, p = 0;
for (i = 0; i < size; i++)
{
x += a[i];
a += size;
}
a -= size;
for (i = 0; i < size; i++)
{
p += a[i];
a -= size;
}
printf("%d, %d\n", x, p);
}
