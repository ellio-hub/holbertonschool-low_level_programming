#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - main function
 * @separator: parameter
 * @n: parameter
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *c;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
c = va_arg(args, char *);
if (c != NULL)
printf("%s", c);
else
printf("(nil)");
 if ((separator != NULL) && (i != (n - 1)))
printf("%s", separator);
}
putchar('\n');
va_end(args);
}
