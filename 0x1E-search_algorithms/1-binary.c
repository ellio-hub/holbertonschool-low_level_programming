#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index or -1
 */
int binary_search(int *array, size_t size, int value)
{
size_t i = 0;
size_t size_l = 0, size_r = size - 1, size_m;
if (array == NULL)
return (-1);
while (size_l <= size_r)
{
printf("Searching in array: ");
for (i = size_l; i < size_r; i++)
printf("%i, ", array[i]);
printf("%i\n", array[size_r]);
size_m = (size_l + size_r) / 2;
if (array[size_m] < value)
size_l = size_m + 1;
else if (array[size_m] > value)
size_r = size_m - 1;
else
return (size_m);
}
	return (-1);
}
