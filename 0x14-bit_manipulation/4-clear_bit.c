#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @index: index, starting from 0 of the bit you want to set
 * @n: pointer to the number to change.
 *
 * Return:  1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1UL << index;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

mask = ~mask;
*n = *n & mask;

return (1);
}
