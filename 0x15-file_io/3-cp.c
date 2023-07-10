#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_error - prints an error message to the POSIX standard error.
 * @message: error message to print.
 */
void print_error(const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
}

/**
 * open_file - opens a file with the specified flags and mode.
 * @filename: name of the file to open.
 * @flags: flags to use when opening the file.
 * @mode: mode to use when creating the file (if applicable).
 *
 * Return: the file descriptor on success,
 * or exits with an error code on failure.
 */
int open_file(const char *filename, int flags, mode_t mode)
{
int fd = open(filename, flags, mode);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
exit(98);
}
return (fd);
}

/**
 * copy_file - copies the contents of one file to another.
 * @fd_from: file descriptor of the source file.
 * @fd_to: file descriptor of the destination file.
 *
 * Return: void. Exits with an error code on failure.
 */
void copy_file(int fd_from, int fd_to)
{
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to file\n");
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file\n");
exit(98);
}
}

/**
 * main - entry point of the program.
 * @argc: number of command-line arguments.
 * @argv: array of command-line arguments.
 *
 * Description: This program copies the contents of one file to another.
 *
 * Return: 0 on success, or the corresponding error code on failure.
 */
int main(int argc, char **argv)
{
int fd_from, fd_to;

if (argc != 3)
{
print_error("Usage: cp file_from file_to");
exit(97);
}

fd_from = open_file(argv[1], O_RDONLY, 0);
fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

copy_file(fd_from, fd_to);

if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
exit(100);
}

if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
exit(100);
}

return (0);
}
