#include "holberton.h"
/**
 * rev_string - reverse string
 * @str: parameter
 *
 * Return: void
 */
void rev_string(char *str)
{
char tmp;
int l = 0;
int i;
char *x;
char *g;
x = str;
g = str;
while (str[l] != '\0')
l++;
for (i = 0; i < l - 1; i++)
{
g++;
}
for (i = 0; i < l / 2; i++)
{
tmp = *g;
*g = *x;
*x = tmp;
x++;
g--;
}
}
