#include "holberton.h"
/**
 * _puts_recursion - main function
 * @s: parameter
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
if (!*s) 
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
