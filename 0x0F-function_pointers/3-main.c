#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on wrong number of arguments,
 * 99 if the operator is invalid, 100 if division/modulo by 0
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

op_func = get_op_func(argv[2]);

if (op_func == NULL)
{
printf("Error\n");
return (99);
}

if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}

result = op_func(num1, num2);
printf("%d\n", result);

return (0);
}
