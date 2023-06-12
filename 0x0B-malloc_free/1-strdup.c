#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: copy of the string
 * @duplicate: duplicate of the string.
 *
 * Return:  pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
char *duplicate;

if (str == NULL)
return (NULL);

duplicate = (char *)malloc(strlen(str) + 1);
if (duplicate == NULL)
{
return (NULL);
}

strcpy(duplicate, str);
return (duplicate);
}
