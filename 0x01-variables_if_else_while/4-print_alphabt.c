#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - prints the alphabetic
 *Return: Always (Success)
 */

int main(void)

{
char low, e, q;
e = 'e';
q = 'q';

for (low = 'a'; low <= 'z'; low++)
{
if (low != e && low != q)
putchar (low);
}
putchar('\n');
return (0);
}
