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
if (index > (sizeof(n) * 8))
return (-1);
unsigned long int x = 1;
x = x << index;
*n = (*n | x);
return(0);
}
