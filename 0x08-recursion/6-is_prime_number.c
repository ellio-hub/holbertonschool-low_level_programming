#include "holberton.h"
/**
 * is_prime_number - main function
 * @n: parameter
 * Return: 1 or 0 
 */
int is_prime_number(int n)
{
int i = n / 2;
if (n < 0)
i *= -1;
if (n < 2)
return (0);
return (check_prime(i, n));
}
/**
 * _prime - function
 * @i: parameter
 * @n: parameter
 * Return: 1 or 0
 */
int _prime(int i, int n)
{
if (i <= 1)
return (1);
if (n % i)
return (_prime(i - 1, n));
else
return (0);
}
