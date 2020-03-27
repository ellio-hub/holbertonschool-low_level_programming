#include "holberton.h"
#include <limits.h>
/**
 * print_binary - main function
 * @n: parameter
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int m = ULONG_MAX;
int x = 0;
m = (m ^ (m >> 1));
if (n == 0)
_putchar('0');
else
{
while (m > 0)
{

if ((n & m) == 0)
{
if (x == 1)
_putchar('0');
}
else
{
_putchar('1');
x = 1;
}
m = m >> 1;
}
}
}
