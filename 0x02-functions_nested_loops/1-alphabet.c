#include <stdio.h>
#include "holberton.h"
/**
 *print_alphabet - main function
 *@void: empty
 *Return: 0
 */
void print_alphabet(void)
{
char ch = 'a';

for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
return;
}
