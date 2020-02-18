#include "holberton.h"
/**
 * _puts - print string
 * @str: parameter
 *
 * Return: void
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
