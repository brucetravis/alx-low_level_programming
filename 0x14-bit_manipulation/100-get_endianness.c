#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big and 1 for little
 */

int get_endianness(void)
{
unsigned int num = 1;
unsigned char *ptr = (unsigned char *)&num;

if (ptr[0] == 1)
{
return (1);
}
else
{
return (0);
}
}
