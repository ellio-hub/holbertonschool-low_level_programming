#include "holberton.h"
/**
 * binary_to_uint - main function
 * @b: parameter
 *
 * Return: 0 or converted number
 */

unsigned int binary_to_uint(const char *b)
{
if (!b)
return (0);
int i = 0;
int l;
int q = 1;
unsigned int x = 0;
for (l = 0; b[l] != '\0'; l++)
{
if ((b[l] != '0') && (b[l] != '1'))
return (0);
}
for (i = (l - 1); i >= 0; i--)
{
x += ((b[i] - 48) * q);
q *= 2;
}
return (x);
}
