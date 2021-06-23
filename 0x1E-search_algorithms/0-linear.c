#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
size_t t;
if (array == NULL)
return (-1);
for (t = 0; t < size; t++)
{
printf("Value checked array[%lu] = [%d]\n", t, array[t]);
if (array[t] == value)
return (t);
}
return (-1);
}
