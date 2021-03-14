#include "holberton.h"
/**
 * clear_bit - main function
 * @n: parameter
 * @index: parameter
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int i = 1;
if (sizeof(n) * 8 < index)
return (-1);
i <<= index;
*n &= ~i;
return (1);
}
