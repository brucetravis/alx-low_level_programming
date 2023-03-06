#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry ppoint
 * @s: input
 * @c: input
 * Return: ALways 0 (Success)
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + 1);
}
return (NULL);
}
