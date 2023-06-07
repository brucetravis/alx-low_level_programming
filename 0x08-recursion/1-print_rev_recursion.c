#include <stdio.h>
#include <stdlib.h>

/**
 * _print_rev_recursion - prints a string in reverse;
 * @s: string to print in reverse
 *
 * Return: Always 0 on success.
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
putchar(*s);
}
