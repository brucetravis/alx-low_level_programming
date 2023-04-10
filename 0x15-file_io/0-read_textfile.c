#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile- Read text file print to STDOUT using putchar.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t t;
ssize_t w = 0;
ssize_t i;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(fd);
return (0);
}

t = read(fd, buf, letters);
if (t == -1)
{
free(buf);
close(fd);
return (0);
}

for (i = 0; i < t; i++)
{
if (putchar(buf[i]) == EOF)
{
free(buf);
close(fd);
return (0);
}
w++;
}

free(buf);
close(fd);
return (w);
}
