#include "main.h"
/**
 * close_buffer - a function that creates the buffer and
 * closes a file descriptor
 * @filename: a pointer to the file
 * @fd: the file descriptor to be closed
 *
 * Returns: buffer on success and errormessage on failure
 */
void close_buffer(const char *filename, int fd)
{
	int file;
	char *buf;

	file = close(fd);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buf);
}

/**
 * main -  entry point
 * @argv: input value
 * @argc: input value
 *
 * Return: On success 0
 */
int main(int argc, char argv[])
{
	int f_to, f_from, read_bytes, write_bytes;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = close_buffer(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	read_bytes = read(f_from, buf, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (read_bytes == -1 || f_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		write_bytes = write(f_to, buf, read_bytes);
		if (write_bytes == -1 || f_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		read_bytes = read(f_from, buf, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_bytes > 0);
		close(f_to);
		close(f_from);
		free(buf);
	return (0);
}
