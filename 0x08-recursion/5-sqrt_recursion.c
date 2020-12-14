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
if (n == 0)
return (0);
return (check(1, n));
}

/**
 * check - check function
 * @i:parameter
 * @j:parameter
 * return: integer
 */

int check(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (check(i + 1, j));
}
