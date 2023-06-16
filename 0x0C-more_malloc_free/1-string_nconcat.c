#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string1
 * @s2: string2
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = (s1 != NULL) ? strlen(s1) : 0;
unsigned int len2 = (s2 != NULL) ? strlen(s2) : 0;
unsigned int concat_len = (n >= len2) ? len1 + len2 : len1 + n;

char *result = malloc((concat_len + 1) * sizeof(char));
if (result == NULL)
{
return (NULL);
}

result[0] = '\0';

if (s1 != NULL)
{
strcpy(result, s1);
}

if (n >= len2)
{
strcat(result, s2);
}
else
{
strncat(result, s2, n);
}

return (result);
}
