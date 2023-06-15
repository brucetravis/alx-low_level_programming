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
int *array;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;
array = malloc(size * sizeof(int));

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = min++;

return (array);
}

/**
 * main - example usage of the array_range function
 *
 * Return: Always 0
 */
int main(void)
{
int *arr, i;
int min = 0, max = 10;

arr = array_range(min, max);
if (arr == NULL)
{
printf("Failed to create array\n");
return (1);
}

for (i = 0; i <= max - min; i++)
printf("%d ", arr[i]);

free(arr);

return (0);
}
