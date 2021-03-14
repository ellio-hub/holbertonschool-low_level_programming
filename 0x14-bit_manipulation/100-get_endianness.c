#include "holberton.h"
/**
 * get_endianness - checks endianness
 * Return: int
 * 
 */
int get_endianness(void)
{
unsigned int t = 1;
char *h = (char *)&t;
if (*h)
return (1);
return (0);
}
