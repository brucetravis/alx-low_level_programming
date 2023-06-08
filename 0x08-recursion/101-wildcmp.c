#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * wildcmp - compares two strings.
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*')
{
return (wildcmp(s1, s2 + 1));
}
return (*s2 == '\0');
}
if (*s2 == '*')
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
