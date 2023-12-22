#include "main.h"

/**
 * main - Displays information contained in the ELF header of a file
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int ac, char **av) {
    int file_descriptor, bytes_read;
    Elf64_Ehdr header;

    if (ac != 2) {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", av[0]);
        return 98;
    }

    file_descriptor = open(av[1], O_RDONLY);
    if (file_descriptor == -1) {
        dprintf(STDERR_FILENO, "Error: Couldn't open %s\n", av[1]);
        return 98;
    }

    bytes_read = read(file_descriptor, &header, sizeof(header));
    if (bytes_read != sizeof(header)) {
        dprintf(STDERR_FILENO, "Error: Couldn't read ELF header from %s\n", av[1]);
        close(file_descriptor);
        return 98;
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", av[1]);
        close(file_descriptor);
        return 98;
    }

    printf("ELF Header:\n");
    /* Print the required ELF header information */
    /* You'll need to interpret the fields from the header struct */

    close(file_descriptor);
    return 0;
}

