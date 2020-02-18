#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: parameter
 *
 * Return: void
 */
void puts_half(char *str)
{
int l;
int i;
int x;
for (l = 0; str[l] != '\0'; l++)
{
}
x = (l + 1) / 2;
for (i = x; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
