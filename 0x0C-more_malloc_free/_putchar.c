#include <unistd.h>

/**
 * _putchar - writes the c character c to stdout
 * @c: The chracter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errn is set appropriately.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
