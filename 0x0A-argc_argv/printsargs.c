#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to it.
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0.
 */

int main(int argc, char *argv)
{
int i;

for (i = 0; i < argc; i++)
{
printf("%d\n", argv[i]);
i++;
}

return (0);
}
