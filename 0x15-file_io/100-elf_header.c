#include "main.h"

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

printf("  Class:                             ");
switch (header->e_ident[4])
{
case 1:
printf("ELF32\n");
break;
case 2:
printf("ELF64\n");
break;
default:
printf("<unknown>\n");
}

printf("  Data: ");
switch (header->e_ident[5])
{
case 1:
printf("2's complement, little endian\n");
break;
case 2:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown>\n");
}

printf("Version:  %u (current)\n", header->e_version);

printf("  OS/ABI:                            ");
switch (header->e_ident[7])
{
case 0:
printf("UNIX - System V\n");
break;
case 1:
printf("UNIX - HP-UX\n");
break;
case 2:
printf("UNIX - NetBSD\n");
break;
case 3:
printf("UNIX - Linux\n");
break;
case 6:
printf("UNIX - Solaris\n");
break;
case 7:
printf("UNIX - AIX\n");
break;
case 8:
printf("UNIX - IRIX\n");
break;
case 9:
printf("UNIX - FreeBSD\n");
break;
case 10:
printf("UNIX - Tru64\n");
break;
case 11:
printf("UNIX - Novell Modesto\n");
break;
case 12:
printf("UNIX - OpenBSD\n");
break;
case 13:
printf("UNIX - OpenVMS\n");
break;
case 14:
printf("UNIX - NonStop Kernel\n");
break;
case 15:
printf("UNIX - AROS\n");
break;
case 16:
printf("UNIX - Fenix OS\n");
break;
case 17:
printf("UNIX - CloudABI\n");
break;
default:
printf("<unknown: %u>\n", header->e_ident[7]);
}

printf("ABI Version: %u\n", header->e_ident[8]);

printf("  Type:                              ");
switch (header->e_type) {
case 1:
printf("REL (Relocatable file)\n");
break;
case 2:
printf("EXEC (Executable file)\n");
break;
case 3:
printf("DYN (Shared object file)\n");
break;
case 4:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown>\n");
}
printf("  Entry point address: 0x%lx\n", header->e_entry);
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
if (argc != 2)
{
print_error("Usage: elf_header elf_filename");
}

int fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
print_error("Error opening file");
}

Elf64_Ehdr header;
ssize_t bytes_read = read(fd, &header, sizeof(header));
if (bytes_read != sizeof(header))
{
print_error("Error reading file");
}

close(fd);
print_elf_header(&header);
return (0);
}
