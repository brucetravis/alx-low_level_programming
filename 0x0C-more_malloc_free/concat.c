#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1.
 * @s2: string 2.
 * @n: nummber of bytes
 *
 * Return: pointer that points to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
{
s1 = " ";
}

if (s2 == NULL)
{
s2 = " ";
}

size_t s2_length = strlen(s2);
if (n >= s2_length)
{
n = s2_length;
}

char *result = (char *)malloc(strlen(s1) + n + 1);
if (result == NULL)
{
return (NULL);
}

strcpy(result, s1);
strncat(result, s1, n);

return (result);
}
