#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: character pointed to.
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
unsigned int = 10;
char b = 'A';

char *ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}

free(ptr);

return (ptr);
}
