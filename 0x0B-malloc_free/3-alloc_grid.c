#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - main function
 * @width: parameter
 * @height:parameter
 * Return: a
 */

int **alloc_grid(int width, int height)
{
int i, y;
int **a;
if (width <= 0 || height <= 0)
return (NULL);
a = (int **)malloc(sizeof(int *) * height);
if (a == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
a[i] = (int *)malloc(sizeof(int) * width);
if (a[i] == NULL)
{
for (y = 0; y < i; y++)
free(a[y]);
free(a);
return (NULL);
}
for (y = 0; y < width; y++)
a[i][y] = 0;
}
return (a);
}
