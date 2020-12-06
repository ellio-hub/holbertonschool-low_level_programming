#include "holberton.h"

/**
 * print_number - print a number
 * @n: parameter
 * Return: void
 */

void print_number(int n)
{
int x = 0;
if (n < 0)
{
_putchar('-');
n = -n;
}
while (n > 0)
{
x = x * 10 + (n % 10);
n = n / 10;
}
while (x >= 10)
{
_putchar(x % 10 + '0');
x = x / 10;
}
_putchar(x + '0');
}
