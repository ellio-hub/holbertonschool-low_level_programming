#include "holberton.h"
/**
 * print_rev - print string in reverse
 * @str: parameter
 *
 * Return: void
 */
void print_rev(char *str)
{
char *tmp;
int x;
int l = 0;
tmp = str;
while (*tmp != '\0')
{
l++;
tmp++;
}
for (x = l - 1; x >= 0; x--)
{
_putchar(str[x]);
}
_putchar('\n');
}
