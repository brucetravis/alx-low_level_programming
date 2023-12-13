#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - Search for a value in a sorted array using Exponential search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
size_t bound = 1;
size_t low = bound / 2;
size_t high = (bound < size - 1) ?
bound : size - 1;
size_t i;
size_t mid = (low + high) / 2;

if (array == NULL)
return (-1);

if (size == 0)
return (-1);

while (bound < size && array[bound] < value)
{
print_checked_value(array, bound);
bound *= 2;
}

printf("Value found between indexes [%lu] and [%lu]\n", low, high);

while (low <= high)
{
printf("Searching in array: ");
for (i = low; i <= high; ++i)
{
printf("%d", array[i]);
if (i < high)
printf(", ");
}
printf("\n");

if (array[mid] == value)
return (mid);

if (array[mid] < value)
low = mid + 1;
else
high = mid - 1;
}

return (-1);
}
