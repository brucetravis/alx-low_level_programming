#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0, len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
{
len++;
j++;
}
len++;
}

str = malloc(sizeof(char) * len);
if (str == NULL)
return (NULL);

k = 0;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
{
str[k] = av[i][j];
j++;
k++;
}

str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}
