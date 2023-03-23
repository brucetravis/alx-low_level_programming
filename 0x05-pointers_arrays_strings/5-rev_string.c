#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: The string to be reversed
 *
 * RETURN: void
 */

void rev_string(char *s)
{
int length = strlen(s);

int i;
for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
}
