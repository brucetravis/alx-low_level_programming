#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s - String to be printed in reverse
 *
 * RETURN: Always 0 (success)
 */

void _print_rev_recursion(char *s);
{
char s[] = "I love my code";

return (0);
}

void _print_rev_recursion(char *s)
{
_print_rev_recursion(s + 1);
putchar("%s", *s);
}
