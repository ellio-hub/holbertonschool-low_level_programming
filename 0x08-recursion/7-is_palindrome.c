#include "holberton.h"

/**
 * _strlen_recursion - find length
 * @s:parameter
 * Return:integer
 */

int _strlen_recursion(char *s)
{
int i = 0;
if (*s)
{
i++;
i += _strlen_recursion(s + 1);
}
return (i);
}

/**
 * check_palindrome - checks
 * @i:parameter
 * @j:parameter
 * @s: parameter
 * Return: integer
 */
int check_palindrome(int i, int j, char *s)
{
if (i >= j)
return (1);
else if (s[i] != s[j])
return (0);
else
return (check_palindrome(i + 1, j - 1, s));
}

/**
 * is_palindrome - main func
 * @s:parameter
 * Return: integer
 */

int is_palindrome(char *s)
{
int w;
w = _strlen_recursion(s) - 1;
return (check_palindrome(0, w, s));
}
