#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_magic(unsigned char *e_ident);
void print_class(unsigned char e_ident);
void print_data(unsigned char e_ident);
void print_osabi(unsigned char e_ident);

void print_magic(unsigned char *e_ident) 
{
	int i;
    printf("Magic: ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", e_ident[i]);
    printf("\n");
}

void print_class(unsigned char e_ident) 
{
    printf("Class: ");
    switch (e_ident) 
    {
        case ELFCLASSNONE: printf("None\n"); break;
        case ELFCLASS32: printf("ELF32\n"); break;
        case ELFCLASS64: printf("ELF64\n"); break;
        default: printf("Unknown\n"); break;
    }
}

void print_data(unsigned char e_ident)
{
    printf("Data: ");
    switch (e_ident) 
    {
        case ELFDATANONE: printf("None\n"); break;
        case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
        case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
        default: printf("Unknown\n"); break;
    }
}

void print_osabi(unsigned char e_ident)
{
    printf("OS/ABI: ");
    switch (e_ident) 
    {
        case ELFOSABI_NONE: printf("UNIX - System V\n"); break;
        default: printf("Unknown\n"); break;
    }
}

int main(int argc, char **argv)
{
    int fd;
    ssize_t bytes;
    Elf64_Ehdr ehdr;

    if (argc != 2)
    {
        write(2, "Usage: elf_filename\n", 20);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        write(2, "Error opening file\n", 19);
        exit(98);
    }

    bytes = read(fd, &ehdr, sizeof(ehdr));
    if (bytes < (ssize_t)sizeof(ehdr))
    {
        write(2, "Error reading ELF header\n", 24);
        exit(98);
    }

    if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
        ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
    {
        write(2, "Not an ELF file\n", 16);
        exit(98);
    }

    print_magic(ehdr.e_ident);
    print_class(ehdr.e_ident[EI_CLASS]);
    print_data(ehdr.e_ident[EI_DATA]);
    printf("Version: %d\n", ehdr.e_ident[EI_VERSION]);
    print_osabi(ehdr.e_ident[EI_OSABI]);
    printf("ABI Version: %d\n", ehdr.e_ident[EI_ABIVERSION]);
    printf("Type: %d\n", ehdr.e_type);
    printf("Entry point address: %lx\n", ehdr.e_entry);

    close(fd);
    return 0;
}

