#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @letters: number of letters it should read and print.
 * @filename: the name of the file.
 * 
 * Return: actual number of letters it could read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytesRead, bytesWritten;

fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}

if (filename == 0)
{
return (0);
}

buffer = (char *)malloc(letters + 1);
if (buffer == NULL)
{
close(fd);
return (0);
}

bytesRead = read(fd, buffer, letters);
if (bytesRead == -1)
{
close(fd);
free(buffer);
return (0);
}

bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
if (bytesWritten == -1 || bytesWritten != bytesRead)
{
close(fd);
free(buffer);
return (0);
}

close(fd);
free(buffer);
return (bytesRead);
}
