#include <stdio.h>
#include "holberton.h"

/**
 * print_buffer - print a buffer
 * @b: parameter
 * @size: parameter
 * return: void
 */

void print_buffer(char *b, int size)
{
int i;
for (i = 0; i < size; i++)
sprintf(&b[2 * i], "%02X", b[i]);
}
