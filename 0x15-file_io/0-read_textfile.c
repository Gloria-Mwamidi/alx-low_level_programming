#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it
 * in POSIX standard output
 * @filename: variable representation of the file to be read
 * @letters: the numbers of letters it should read and print
 *
 * Return: On failure 0 on sucess the actual
 * number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file;
	ssize_t read_bytes, write_bytes;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	read_bytes = read(file, buffer, letters);
	if (read_bytes == -1)
	{
		close(read_bytes);
		free(buffer);
		return (0);
	}
	write_bytes = write(1, buffer, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		close(write_bytes);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(file);
	return (read_bytes);
}

