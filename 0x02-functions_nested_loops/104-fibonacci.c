#include<stdio.h>

/**
 * main - main function
 * Return: void
 */

int main(void)
{
long int a = 0, b = 1, s, i;
for (i = 0; i < 98; i++)
{
s = a + b;
a = b;
b = s;
printf("%ld, ", s);
}
return (0);
}
