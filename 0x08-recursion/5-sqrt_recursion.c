#include <stdio.h>
#include "main.h"

/**
 * _sqrt_helper - Helper function to find the square root recursively.
 * @n: number to find the square root of.
 * @start: starting point of the binary search.
 * @end: ending point of the binary search.
 *
 * Return: natural square root of n or -1 if it does not have one.
 */
int _sqrt_helper(int n, int start, int end);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (_sqrt_helper(n, 1, n));
}
}

/**
 * _sqrt_helper - Helper function to find the square root recursively.
 * @n: number to find the square root of.
 * @start: starting point of the binary search.
 * @end: ending point of the binary search.
 *
 * Return: natural square root of n or -1 if it does not have one.
 */
int _sqrt_helper(int n, int start, int end)
{
int mid = (start + end) / 2;

if (start <= end)
{
int square = mid * mid;

if (square == n)
{
return (mid);
}
else if (square > n)
{
return (_sqrt_helper(n, start, mid - 1));
}
else
{
return (_sqrt_helper(n, mid + 1, end));
}
}

return (-1);
}
