#include <stdio.h>
#include "holberton.h"
/**
* main - prints the alphabet
* @ch: char
* Return: 0
*/

int main(void)
{
char ch;

for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar("\n");
return (0);
}
