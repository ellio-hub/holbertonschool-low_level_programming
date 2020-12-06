#include<stdio.h>

/**
 * main - main function
 * Return: void
 */

int main(void)
{
long int a = 0, b = 1, s, i;
for (i = 1; i < 50; i++)
{
s = a + b;
a = b;
b = s;
printf("%ld, ", s);
}
s = a + b;
printf("%ld ", s);
return (0);
}
