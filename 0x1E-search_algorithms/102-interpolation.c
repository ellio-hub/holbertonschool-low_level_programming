#include "search_algos.h"

/**
 * interpolation_search -  searches for a value in a sorted array
 * @array:  pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index
 */

int interpolation_search(int *array, size_t size, int value)
{
size_t l = 0, h = size - 1, p;
if (array == NULL && size == 0)
return (-1);
while ((array[h] != array[l]))
{
p = l + ((value - array[l]) * (h - l) / (array[h] - array[l]));
if (p < 0 || p > h)
{
printf("Value checked array[%lu] is out of range\n", p);
break;
}
printf("Value checked array[%lu] = [%d]\n", p, array[p]);
if (array[p] < value)
l = p + 1;
else if (value < array[p])
h = p - 1;
else
return (p);
}
if (value == array[l])
return (l);
else
return (-1);
}
