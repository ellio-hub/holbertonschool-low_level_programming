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
if (!n || !index)
return (-1);
unsigned int w;
char x[index];
int i;
x[0] = 1;
if (index != 0)
for (i = 1; i <= index; i++)
x[i] = 0;
const char t = *x;
w = binary_to_uint(&t);
*n = (*n | w);
return (1);
}
