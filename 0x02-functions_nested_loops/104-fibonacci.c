#include<stdio.h>

/**
 * main - main function
 * Return: void
 */

int main(void)
{
long long a = 0, b = 1, s;
int i;
for (i = 1; i < 98; i++)
{
s = a + b;
a = b;
b = s;
printf("%lli, ", s);
}
s = a + b;
printf("%lli\n", s);
return (0);
}
