#include<stdio.h>

/**
 * main - main function
 * Return: void
 */

int main(void)
{
long int a = 0, b = 1, s;
int i;
for (i = 1; i < 98; i++)
{
s = a + b;
a = b;
b = s;
printf("%ld, ", s);
}
s = a + b;
printf("%ld\n", s);
return (0);
}
