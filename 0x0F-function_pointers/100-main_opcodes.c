#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the main function
 * @num_bytes: Number of bytes to print
 */
void print_opcodes(int num_bytes)
{
int i;
char *main_opcodes = (char *)print_opcodes;

for (i = 0; i < num_bytes; i++)
{
printf("%.2hhx", main_opcodes[i]);

if (i != num_bytes - 1)
printf(" ");
}

printf("\n");
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 on incorrect number of arguments,
 * 2 if the number of bytes is negative
 */
int main(int argc, char *argv[])
{
int num_bytes;

if (argc != 2)
{
printf("Error\n");
return (1);
}

num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

print_opcodes(num_bytes);

return (0);
}
