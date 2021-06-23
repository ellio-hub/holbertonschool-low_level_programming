#include "search_algos.h"

/**
 * jump_search - searching algorithm
 * @array: pointer to the first element of the arra
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
int step = 0, i = 0, w = 0;
if (array == NULL)
return (-1);
step = sqrt(size);
while (array[i] < value && i < (int) size)
{
w = i;
i = w + step;
if (w < (int) size)
printf("Value checked array[%d] = [%d]\n", w, array[w]);
}
if (w >= (int) size && array[size] != value)
w -= step;
printf("Value found between indexes [%d] and [%d]\n", w, w + step);
while (array[w] < value)
{
if (w >= (int) size)
break;
printf("Value checked array[%d] = [%d]\n", w, array[w]);
w += 1;
}
if (array[w] == value)
{
printf("Value checked array[%d] = [%d]\n", w, array[w]);
return (w);
}
return (-1);
}
