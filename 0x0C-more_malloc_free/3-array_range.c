#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value (inclusive)
 * @max: the maximum value (inclusive)
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *array, size, i;

if (min > max)
return (NULL);

size = max - min + 1;
array = malloc(size *sizeof(int));

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = min++;

return (array);
}
