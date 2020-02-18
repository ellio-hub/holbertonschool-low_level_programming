#include "holberton.h"
/**
 * puts2 - print every other characterin a string
 * @str: parameter
 *
 * Return: void
 */
void puts2(char *str)
{
char *tmp;
int i;
int l = 0;
tmp = str;
while (*tmp != '\0')
{
l++;
tmp++;
}
for (i = 0; i < l; i += 2)
{
_putchar(*(str + i));
}
_putchar('\n');
}
