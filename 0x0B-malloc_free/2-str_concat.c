#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: The concatenated string (s1 + s2) or NULL on failure.
 */

char *_str_concat(char *s1, char *s2)
{
char *concatenated;
unsigned int len1 = 0, len2 = 0, i, j;

if (s1 != NULL)
{
while (s1[len1])
len1++;
}

if (s2 != NULL)
{
while (s2[len2])
len2++;
}

concatenated = malloc(sizeof(char) * (len1 + len2 + 1));
if (concatenated == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

for (j = 0; j < len2; j++)
concatenated[i + j] = s2[j];

concatenated[i + j] = '\0';

return (concatenated);
}
