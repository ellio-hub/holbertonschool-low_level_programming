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
int i, x, j;
if (size <= 0)
printf("\n");
else
{
for (i = 9, x = 0; i < size; i += 10)
{	printf("%.8x: ", x);
for (j = x; j <= i ; j++)
{
printf("%.2x", b[j]);
if (j % 2 == 1)
printf(" ");
}
for (j = x; j <= i ; j++)
{
if (b[j] < 32)
printf(".");
else
printf("%c", b[j]);	}
printf("\n"); x = i + 1;	}
if  x < size - 1)
{
i -= 9;
printf("%.8x: ", i);
for (j = i; j < i + 10; j++)
{
if (j < size)
printf("%.2x", b[j]);
else
printf("  ");
if (j % 2 == 1)
printf(" ");	}
for (; i < size ; i++)
{
if (b[i] < 32)
printf(".");
else
printf("%c", b[i]);
}
printf("\n");
}
}
}
