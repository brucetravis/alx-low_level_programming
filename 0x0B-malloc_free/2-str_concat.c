#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
char *concatenated;
unsigned int len1 = 0, len2 = 0, i, j;

if (s1 != NULL)
{
for (len1 = 0; s1[len1] != '\0'; len1++)
;
}

if (s2 != NULL)
{
for (len2 = 0; s2[len2] != '\0'; len2++)
;
}

concatenated = str_concat(s1, s2);
if (concatenated == NULL)
return (NULL);

for (i = 0, j = 0; i < len1; i++, j++)
concatenated[j] = s1[i];

for (i = 0; i < len2; i++, j++)
concatenated[j] = s2[i];
concatenated[j] = '\0';

return (concatenated);
}

/**
 * _str_concat - Allocates memory for concatenating two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the allocated memory, or NULL on failure
 */
char *_str_concat(char *s1, char *s2)
{
char *concatenated;
unsigned int len1 = 0, len2 = 0, i;

if (s1 != NULL)
{
for (len1 = 0; s1[len1] != '\0'; len1++)
;
}
if (s2 != NULL)
{
for (len2 = 0; s2[len2] != '\0'; len2++)
;
}

concatenated = malloc(sizeof(char) * (len1 + len2 + 1));
if (concatenated == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

for (i = 0; i < len2; i++)
concatenated[i + len1] = s2[i];

return (concatenated);
}
