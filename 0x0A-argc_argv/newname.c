#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints its name followed by a new line.
 * @argc: nummber of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0.
 */

int main(int *argc, char *argv)
{
int i;

for (i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
i++;
}

return (0);
}
