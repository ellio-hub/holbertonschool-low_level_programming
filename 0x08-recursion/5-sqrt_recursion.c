#include "holberton.h"
#include <stdio.h>
/**
 * _sqrt_recursion - main function
 * @n: parameter
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
int x = n;
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (1);
 if (((x * x) - n) < 1)
return (x);
x = _sqrt_recursion(x);
printf("x = %d",x);
return (0.5 * (x + n / x));
}
