#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - main function
 * @n: parameter
 * Return: n
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i <= 98; i++)
if (i != 98)
printf("%i, ", i);
else
printf("%i\n", i);
}
else
{
for (i = n; i >= 98; i--)
if (i != 98)
printf("%i, ", i);
else
printf("%i\n", i);
}
}
