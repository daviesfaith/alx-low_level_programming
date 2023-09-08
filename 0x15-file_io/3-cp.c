ç#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void close_file(int ab);
char *create_buffer(char *file);

/**
 * create_buffer - This allocates 1024 bytes for a buffer.
 * @file: This is the name of the file buffer is storing chars for.
 *
 * Return: This is a pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
        char *buffer;

        buffer = malloc(sizeof(char) * 1024);

        if (buffer == NULL)
        {
                dprintf(STDERR_FILENO,
                        "Error: Can't write to %s\n", file);
                exit(99);
        }

        return (buffer);
}

/**
 * close_file - This closes file descriptors.
 * @ab: The file descriptor that is to be closed.
 */
void close_file(int ab)
{
        int c;

        c = close(ab);

        if (c == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close ab %d\n", ab);
                exit(100);
        }
}

/**
 * main - This will copy the contents of a file to another file.
 * @argv: An array of pointers to the arguments.
 * @argc: The number of arguments supplied to the program.
 *
 * Return: On success, 0
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
-- INSERT --                                                                        1,3-2         Top
