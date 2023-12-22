#include "main.h"

/**
 * create_file - Creates a file and writes a text to it
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content) {
    int file_descriptor, bytes_written;
    mode_t mode = S_IRUSR | S_IWUSR;

    if (filename == NULL)
        return -1;

    file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
    if (file_descriptor == -1)
        return -1;

    if (text_content != NULL) {
        bytes_written = write(file_descriptor, text_content, strlen(text_content));
        if (bytes_written == -1) {
            close(file_descriptor);
            return -1;
        }
    }

    close(file_descriptor);
    return 1;
}

