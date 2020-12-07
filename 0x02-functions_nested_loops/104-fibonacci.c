#include<stdio.h>

/**
 * main - main function
 * Return: void
 */

int main(void)
{
unsigned long int a = 0, b = 1, s;
int i;
for (i = 1; i < 98; i++)
{
s = a + b;
a = b;
b = s;
printf("%lu, ", s);
}
s = a + b;
printf("%lu\n", s);
return (0);
}
