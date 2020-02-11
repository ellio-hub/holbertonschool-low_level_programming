#include <stdio.h>
#include "holberton.h"
/**
 *print_alphabet_x10 - main function
 *@void: empty
 *Return: void
 */
void print_alphabet_x10(void)
{
int x = 1;
for (x = 1 ; x <= 10 ; x++)
{
char ch = 'a';

for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
return;
}
