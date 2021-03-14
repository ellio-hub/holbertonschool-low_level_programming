#include "holberton.h"
/**
 * flip_bits - main function
 * @n: parameter
 * @m: parameter
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x;
int i = 0;
x = n ^ m;
while (x >= 1)
{
if ((x & 1) == 1)
i++;
x >>= 1;
}
return (i);
}
