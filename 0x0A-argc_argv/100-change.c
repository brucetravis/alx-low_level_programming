#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int num = atoi(argv[1]);
int result = 0;
int coins[] = {25, 10, 5, 2, 1};
int num_coins = sizeof(coins) / sizeof(coins[0]);

if (num < 0)
{
printf("0\n");
return (0);
}

int j;
for (j = 0; j < 5 && num >= 0; j++)
{
while (num >= coins[j])
{
result++;
num -= coins[j];
}
}
printf("%d\n", result);
return (0);
}
