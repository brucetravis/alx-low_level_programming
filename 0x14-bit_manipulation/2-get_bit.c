#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
return ((n >> index) & 1);
}

/**
 * main - calls the `get_bit` function to retrieve the value of two
 *        bits at specified indices in a binary number. It then prints each bit value 
 *        to the console using putchar. Returns 0 upon successful completion.
 *
 * Return: Always 0
 */

int main(void)
{
unsigned long int n = 5;
unsigned int index1 = 0;
unsigned int index2 = 1;
int bit1 = get_bit(n, index1);
int bit2 = get_bit(n, index2);
if (bit1 != -1)
{
putchar(bit1 + '0');
}
putchar('\n');
if (bit2 != -1)
putchar(bit2 + '0');

putchar('\n');
return (0);
}
