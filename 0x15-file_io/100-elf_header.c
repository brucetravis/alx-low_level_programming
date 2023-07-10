#include "main.h"
#include <elf.h>

/**
 * print_error - prints an error message to the POSIX standard error.
 * @message: error message to print.
 */
void print_error(const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
}

/**
 * print_elf_header_info - prints the information contained in the ELF header.
 * @header: pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
printf("ELF Header:\n");
printf("  Magic:   ");

for (int i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");
printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "UNIX - Other");
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              %d (%s)\n", header->e_type, header->e_type == ET_EXEC ? "Executable file" : "Other");
printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - entry point of the program.
 * @argc: number of command-line arguments.
 * @argv: array of command-line arguments.
 *
 * Return: 0 on success, or the corresponding error code on failure.
 */
int main(int argc, char **argv)
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
print_error("Usage: elf_header elf_filename");
return (98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot open file '%s'\n", argv[1]);
return (98);
}

if (read(fd, &header, sizeof(header)) != sizeof(header))
{
print_error("Error: Cannot read ELF header");
close(fd);
return (98);
}

if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
{
print_error("Error: Not an ELF file");
close(fd);
return (98);
}

print_elf_header_info(&header);

close(fd);
return (0);
}
