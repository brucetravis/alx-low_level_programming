#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask = 1UL << index;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

if ((n & mask) == 0)
{
return (0);
}
else
{
return (1);
}
}
