#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of all parameters
 * @n: number of parameters
 *
 * Return:  sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum = 0;

if (n == 0)
{
return (0);
}

va_start(args, n);

for (i = 0; i < n; i++)
{
int num = va_arg(args, int);
sum += num;
}

va_end(args);

return (sum);
}
