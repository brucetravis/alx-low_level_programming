#include <stdio.h>
#include "main.h"

int actual_sqrt_recursion(int n, int i);
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
int start = 1;
int end = n / 2;
int result = -1;

while (start <= end)
{
int mid = (start + end) / 2;
if (mid * mid == n)
{
return (mid);
}
else if (mid * mid < n)
{
start = mid + 1;
result = mid;
}
else
{
end = mid - 1;
}
}
return (result);
}
}
