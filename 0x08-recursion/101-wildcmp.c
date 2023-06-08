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

if (*s2 == '\0')
{
return (*s1 == '\0');
}
else if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
{
return (1);
}
else if (*s1 != '\0')
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
else
{
return (wildcmp(s1, s2 + 1));
}
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
