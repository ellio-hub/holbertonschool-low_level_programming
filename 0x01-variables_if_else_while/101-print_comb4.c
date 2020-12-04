#include <stdio.h>
/**
 * main - main function
 *
 *
 * Return: 0
 */
int main(void)
{
int a, b, c;
for (a = '0'; a <= '9'; ++a)
{
for (b = '0'; b <= '9'; ++b)
{
for (c = '0'; c <= '9'; ++c)
{
if ((b > a) && (c > b))
{
putchar(a);
putchar(b);
putchar(c);
if ((a != (b - 1)) || (b != (c - 1)) || (c != 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
