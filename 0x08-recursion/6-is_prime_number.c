#include "holberton.h"

/**
 * is_prime_number - main function
 * @n:int
 * Return:int
 */

int is_prime_number(int n)
{
if (n == 2)
return (1);
return (check(2, n));
}

/**
 * check - check function
 * @i:int
 * @j:int
 * Return:int
 */

int check(int i, int j)
{
if (j < 2 || j % i == 0)
return (0);
else if (i > j / 2)
return (1);
else
return (check(i + 1, j));
}
