#include "holberton.h"
/**
 * _strlen_recursion - main function
 * @s: parameter
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
int x = 0;
if (!*s)
{
return (0);
}
x = _strlen_recursion(s + 1);
return (x + 1);
}
