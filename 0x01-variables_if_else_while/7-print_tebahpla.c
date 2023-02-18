#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <stdio.h>

/**
 *main - prints the alphabetic
 *Return: Always (Success)
 */
int main(void)

{
char low;
for (low = 'z'; low >= 'a'; low--)
putchar(low);
putchar('\n');

return (0);
}
