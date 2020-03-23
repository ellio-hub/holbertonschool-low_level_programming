#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - main function
 * @n: parameter
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
sum += va_arg(args, int);
return (sum);
}
