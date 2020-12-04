#include <stdio.h>
/**
 * main - main function
 *
 *
 * Return: 0
 */
int main(void)
{
int a, b;
for (a = '0'; a <= '9'; ++a)
{
for (b = '0'; b <= '9'; ++b)
{
if (b > a)
{
putchar(a);
putchar(b);
if ((a != (b - 1)) || (b != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
