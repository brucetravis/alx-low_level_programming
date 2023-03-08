#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: the number to be multiplied
 * @y: the number of times to multiply the  the value
 *
 * RETURN: -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}
