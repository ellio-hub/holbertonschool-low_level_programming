#include "holberton.h"
/**
 * set_bit - main function
 * @n: parameter
 * @index: parameter
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x = 1;
if (!((*n >> index) & 1))
{
x = x << index;
*n = (*n | x);
return (1);
}
else
return (-1);
}
