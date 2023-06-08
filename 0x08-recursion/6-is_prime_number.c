#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <math.h>

/**
 * is_prime_number - return 1 if the input integer is a prime nummber
 * @n: the input integer.
 *
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

int i;
for (i = 2; i <= n - 1; i++)
{
if (n % i == 0)
{
return (0);
}
}
return (1);
}

/**
 * main - Enry point
 *
 * Return: Always 0.
 */

int main(void)
{
int number = 17;

if (is_prime_number(number))
{
printf("%d is a prime number\n", number);
}
else
{
printf("%d is not a prime number\n", number);
}
return (0);
}
