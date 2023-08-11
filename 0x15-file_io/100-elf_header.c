#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>
#include <elf.h>
#include <errno.h>

void print_error(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
}

void print_elf_header_info(const char *filename, Elf64_Ehdr *header) {
    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("Class:                             ");
    switch (header->e_ident[EI_CLASS]) {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("Invalid\n");
            break;
    }

    printf("Data:                              ");
    switch (header->e_ident[EI_DATA]) {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Invalid\n");
            break;
    }

    printf("Version:                           %d\n", header->e_ident[EI_VERSION]);

    printf("OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX System V ABI\n");
            break;
        default:
            printf("Other\n");
            break;
    }

    printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

    printf("Type:                              ");
    switch (header->e_type) {
        case ET_NONE:
            printf("None\n");
            break;
        case ET_REL:
            printf("Relocatable\n");
            break;
        case ET_EXEC:
            printf("Executable\n");
            break;
        case ET_DYN:
            printf("Shared object\n");
            break;
        case ET_CORE:
            printf("Core dump\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    printf("Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
        return 98;
    }

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Failed to open the file");
        return 98;
    }

    Elf64_Ehdr header;
    ssize_t bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header)) {
        print_error("Error reading ELF header");
        close(fd);
        return 98;
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        print_error("Not an ELF file");
        close(fd);
        return 98;
    }

    print_elf_header_info(filename, &header);

    close(fd);
    return 0;
}
