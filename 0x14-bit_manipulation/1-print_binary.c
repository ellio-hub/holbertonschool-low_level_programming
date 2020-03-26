#include "holberton.h"
/**
 * print_binary - main function
 * @n: parameter
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int m=32768;
while(m > 0)
   {
   if((n & m) == 0 )
         _putchar('0');
   else
         _putchar('1');
  m = m >> 1;
   }
}
