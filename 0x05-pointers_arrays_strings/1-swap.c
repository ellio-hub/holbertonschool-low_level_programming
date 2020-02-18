#include "holberton.h"
/**
 * swap_int - swap two variables
 * @a: parameter
 * @b: parameter
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
