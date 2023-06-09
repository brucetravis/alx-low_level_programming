#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the nummber of arguments passed to it.
 * @argc: number of arguments
 * @argv: array of argumennts
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
(void)argv;

printf("%d\n", argc - 1);

return (0);
}
