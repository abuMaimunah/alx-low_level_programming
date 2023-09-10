#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
void print_error_and_exit(int code, const char *errorMessage)
{
	fprintf(stderr, "Error: %s\n", errorMessage);
	exit(code);
}
void display_elf_header(const char *fileName)
{
	int fd;
	int i;
	Elf64_Ehdr elf_header;
	ssize_t bytesRead;

	fd = open(fileName, O_RDONLY);
	if (fd == -1)
	{
		print_error_and_exit(98, "Unable to open file");
	}
	bytesRead = read(fd, &elf_header, sizeof(Elf64_Ehdr));
	if (bytesRead != sizeof(Elf64_Ehdr)
			|| elf_header.e_ident[EI_MAG0] != ELFMAG0
			|| elf_header.e_ident[EI_MAG1] != ELFMAG1
			|| elf_header.e_ident[EI_MAG2] != ELFMAG2
			|| elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error_and_exit(98, "Not an ELF file");
	}
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\n");
	printf("Class:   %d-bit\n", elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
	printf("Data:    %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "Unknown");
	printf("Version: %d (current)\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI:  %s\n", elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V ABI" : "Unknown");
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type:    %s\n", elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown");
	printf("Entry point address: %lx\n", (unsigned long)elf_header.e_entry);
	close(fd);
}
int main(int argc, char *argv[])
{
	const char *file_name;

	if (argc != 2)
	{
		print_error_and_exit(98, "Usage: elf_header elf_filename");
	}
	file_name = argv[1];
	display_elf_header(file_name);
	return (0);
}
