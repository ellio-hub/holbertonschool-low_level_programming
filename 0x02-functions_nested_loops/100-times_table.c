#include "holberton.h"
/**
 *print_times_table - print time table
 * @n:parameter
 *Return: void
 */
void print_times_table(int n)
{
int i, o, x;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
_putchar('0');
if (n != 0)
_putchar(',');
for (o = 1; o <= n; o++)
{
x = i * o;
if (x < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar('0' + x);
}
else if (x < 100)
{
_putchar(' ');
_putchar(' ');
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
else
{
_putchar(' ');
_putchar((x / 100) + '0');
_putchar(((x % 100) / 10) + '0');
_putchar(((x % 100) % 10) + '0');
}
if (o < n)
_putchar(',');
}
_putchar('\n');
}
}
}
