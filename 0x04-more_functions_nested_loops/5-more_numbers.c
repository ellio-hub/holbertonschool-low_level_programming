#include <stdio.h>
#include "holberton.h"
/**
 *more_numbers - main function
 *@void: empty
 *Return: 0
 */
void more_numbers(void)
{
int i = 1;
for (i = 1 ; i <= 10 ; i++)
{
int x = 0;
char ch = '0';
for (x = 0 ; x <= 14 ; x++)
{
if (x > 9)
_putchar('1'); 
_putchar(ch);
ch++;
if (x == 9)
ch = '0';
}
_putchar('\n');
}
return;
}
