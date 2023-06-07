#include <stdio.h>
#include <stdlib.h>

/**
 * factorial -  returns the factorial of a given number.
 * @n: factorial of number to return from.
 *
 * Return: factorial of n.
 */

int factorial(int n)
{
int result = 1;
int i;

if (n < 0)
{
return -1;
}

if (n == 0)
{
return 1;
}

for (i = 1; i <= n; i++)
{
result *= i;
}

return result;
}	
