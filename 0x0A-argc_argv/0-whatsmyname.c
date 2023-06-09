#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the name of the program.
 * @argc: number of arguments
 * @argv: array of argumments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
printf("%s\n", argv[0]);

if (argc == 3 && strcmp(argv[1], "mv") == 0)
{
int result = rename(argv[0], argv[2]);
if (result == 0)
{
printf("Rename to: %s\n", argv[2]);
}
else
printf("Failed to rename.\n");
}
return (0);
}
