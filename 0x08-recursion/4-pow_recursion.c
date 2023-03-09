#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: the number to be multiplied
 * @y: the number of times to multiply the  the value
 *
 * Return: - the value multiplied by y terms
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}
