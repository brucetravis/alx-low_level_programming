#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
if (nmemb == 0 || size == 0)
{
return (NULL);
}

size_t total_size = nmemb * size;
void *ptr = malloc(total_size);

if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, total_size);

return (ptr);
}
