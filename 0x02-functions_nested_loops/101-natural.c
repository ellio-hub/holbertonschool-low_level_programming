#include<stdio.h>

/**
 * main - main function
 * Return: void
 */

int main(void)
{
int a, j, p, h;
int s = 0;
for (a = 0; a <= (1024  / 3); a++)
{
h = a * 3;
s = s + h;
}
for (j = 0; j < (1024 / 5); j++)
if (!(j % 3 == 0))
{
p = j * 5;
s = s + p;
}
printf("%i\n", s);
return (0);
}
