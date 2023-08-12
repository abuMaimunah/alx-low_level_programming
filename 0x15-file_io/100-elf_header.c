#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
/**
 * pError - error message
 * @message: message
 */
void pError(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}
/**
  * pElfHeaderInfo - header info
  * @header: header
  */
void pElfHeaderInfo(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\nClass: %s\n", (header->e_ident[EI_CLASS] ==
				ELFCLASS32) ? "ELF32" : "ELF64");
	printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ?
			"2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}
/**
  * main - entry point
  * @argc: argument count
  * @argv: argument value
  * Return: success
  */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		pError("Usage: elf_header elf_filename");
	}
	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		pError("Failed to open file");
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		pError("Failed to read ELF header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		pError("Not an ELF file");
	}
	pElfHeaderInfo(&header);
	close(fd);
	return (0);
}
