#include "main.h"
/**
 * main -  main entry point
 * @argc: the number of arguments
 * @argv: the number of values
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int size_write, size_read;
	char *buffer;
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from \n");
		exit(97);
	}
	buffer = set_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	size_read = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | 0664);

	do {
		if (size_read == -1 || file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		size_write = write(file_to, buffer, size_read);
		if (size_write == -1 || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		size_read = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (size_read > 0);

	free(buffer);
	end(file_from);
	end(file_to);
	return (0);
}

/**
 * set_buffer - a function that sets the buffer size 1024
 * @file: a pointer to the buffer
 *
 * Return: buffer on success and error on failure
 */

char *set_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't wirte to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * end - a function that closes a file descriptor
 * @file_desc: the file descriptors to be closed
 *
 * Return: success (0)
 */

int end(int file_desc)
{
	int fd;

	fd = close(file_desc);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file fd %d\n", file_desc);
		exit(100);
	}
		return (file_desc);
}
