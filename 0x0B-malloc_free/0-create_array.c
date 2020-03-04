#include "holberton.h"
#include <stdlib.h>
/**
 * *create_array - main function
 * @size: size of array
 * @c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *tab;
if (size == 0)
return (NULL);
tab = malloc(size * sizeof(char));
for (i = 0; i <= size; i++)
tab[i] = c;
return (tab);
}
