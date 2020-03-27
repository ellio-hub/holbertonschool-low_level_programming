#include "holberton.h"
/**
 * get_bit - main function
 * @n: parameter
 * @index: parameter
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int x;
if (index > (sizeof(n) * 8))
return (-1);
x = n >> index;
if ((x & 1) == 0)
return (0);
else
return (1);
}
