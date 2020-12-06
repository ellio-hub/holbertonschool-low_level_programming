#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
unsigned int i = 1, x = 2, y = 3, v = 2, s;
for (s = 2; s <= 32; s++)
{
if (y % 2 == 0)
v = v + y;
i = x;
x = y;
y = i + x;
}
printf("%u\n", v);
return (0);
}
