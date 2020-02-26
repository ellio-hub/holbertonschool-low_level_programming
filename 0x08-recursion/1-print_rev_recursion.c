#include "holberton.h"
/**
 * _print_rev_recursion - main function
 * @s: parameter
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (!*s)
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
