#include <stdio.h>
#include "holberton.h"
/**
 *print_numbers - main function
 *@void: empty
 *Return: 0
 */
void print_numbers(void)
{
char ch = '0';

for (ch = '0' ; ch <= '9' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
return;
}
