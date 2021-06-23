#include "search_algos.h"

/**
 * jump_search - searching algorithm
 * @array: pointer to the first element of the arra
 * @size: the number of elements in array
 * @value: the value to search for
 * return: int
 */
 
int jump_search(int *array, size_t size, int value)
{
unsigned int s = sqrt(size), l = 0, r = 0, i;
if (array == NULL || size == 0)
return (-1);
while (l < size && array[l] <= value)
{
printf("Value checked array[%d] = [%d]\n", l, array[l]);
r = min(size - 1, l + s);
if (array[l] <= value && array[r] >= value)
break;
l += s;
}
if (value > array[r])
{
printf("Value found between indexes [%d] and [%d]\n",
l - s, l);
printf("Value checked array[%d] = [%d]\n",
l - s, array[l - s]);
}
else
printf("Value found between indexes [%d] and [%d]\n",l, r);
if (l >= size || array[l] > value)
return (-1);
r = min(size - 1, r);
for (i = l; i <= r && array[i] <= value; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}

/**
 * min - find the smallest number
 * @a: parameter
 * @b: parameter
 * return: int
 */
int min(int a, int b)
{
return (a < b ? a : b);
}
