#include <stdio.h>
#include "holberton.h"
/**
 *print_most_numbers - main function
 *@void: empty
 *Return: 0
 */
void print_most_numbers(void)
{
char ch = '0';

for (ch = '0' ; ch <= '9' ; ch++)
{
if ((ch == '2') || (ch == '4'))
{
ch++;
}
_putchar(ch);
}
_putchar('\n');
return;
}
