#include "holberton.h"
/**
 * reverse_array - reverse an array
 * @a: parameter
 * @n: parameter
 * Return: array
 */
void reverse_array(int *a, int n)
{
int x;
int i = 0;
for (i = 0; i <= n / 2 ; i++)
{
x = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = x;
}
return;
}
