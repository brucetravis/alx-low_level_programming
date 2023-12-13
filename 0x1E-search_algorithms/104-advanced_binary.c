#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - Search for a value in a sorted
 * array using advanced binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);

return (binary_search(array, 0, size - 1, value));
}

/**
 * binary_search - Recursive binary search function
 * @array: Pointer to the first element of the array
 * @start: Starting index of the search range
 * @end: Ending index of the search range
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t start, size_t end, int value)
{
size_t mid = (start + end) / 2;
size_t i;

if (start > end)
return (-1);

printf("Searching in array: ");
for (i = start; i <= end; ++i)
{
printf("%d", array[i]);
if (i < end)
printf(", ");
}
printf("\n");

if (array[mid] == value)
return (mid);

if (array[mid] < value)
return (binary_search(array, mid + 1, end, value));
else
return (binary_search(array, start, mid - 1, value));
}
