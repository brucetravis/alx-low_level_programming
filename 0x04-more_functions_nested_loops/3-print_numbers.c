#include "main.h"

/**
 * print_numbers - print numbers from 0 t0 9 followed by a new line
 * Return: The numbers 0 up to 9
 */

void print_numbers(void)
{
int x;
for (x = 0; x <= 9; x++)
{
_putchar(x + '0');
}
_putchar('\n');
}
