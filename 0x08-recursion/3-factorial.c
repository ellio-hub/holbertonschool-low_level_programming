#include "holberton.h"
/**
 * factoriel - main function
 * @n: parameter
 *
 * Return: length
 */
int factorial(int n)
{
if (n < 0)
return(-1);
if (n == 0)
return(1);
return(n * factorial(n - 1));
}
