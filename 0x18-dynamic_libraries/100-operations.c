#include "100-operations.h"
#include <stdio.h>

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */

int add(int a, int b)
{
return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of subtracting b from a.
 */

int sub(int a, int b)
{
return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */

int mul(int a, int b)
{
return (a * b);
}

/**
 * div - Divides two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of dividing a by b (integer division).
 */

int div(int a, int b)
{
if (b == 0)
{
printf("Error: Division by zero\n");
return (0);
}

return (a / b);
}
/**
 * mod - Computes the modulus of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The modulus of a divided by b.
 */

int mod(int a, int b)
{
if (b == 0)
{
printf("Error: Modulus by zero\n");
return (0);
}

return (a % b);
}
