#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, appropriate error codes otherwise
 */
int main(int ac, char **av) {
    int file_from, file_to, bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (ac != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
        return 97;
    }

    file_from = open(av[1], O_RDONLY);
    if (file_from == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
        return 98;
    }

    file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
        close(file_from);
        return 99;
    }

    while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(file_to, buffer, bytes_read);
        if (bytes_written != bytes_read || bytes_written == -1) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
            close(file_from);
            close(file_to);
            return 99;
        }
    }

    if (bytes_read == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
        close(file_from);
        close(file_to);
        return 98;
    }


