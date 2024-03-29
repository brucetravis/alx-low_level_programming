#include <stdio.h>
#include <math.h>
#include "search_algos.h"

size_t min(size_t a, size_t b);

/**
 * jump_search - Search for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
size_t step = sqrt(size);
size_t prev = 0;
size_t i;

if (array == NULL)
return (-1);

while (array[min(step, size) - 1] < value)
{
prev = step;
step += sqrt(size);
if (prev >= size)
return (-1);

printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
}

printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

for (i = prev; i < min(step, size); ++i)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}

/**
 * min - Helper function to find the minimum of two values
 * @a: First value
 * @b: Second value
 *
 * Return: Minimum value between a and b
 */
size_t min(size_t a, size_t b)
{
return (a < b ? a : b);
}
