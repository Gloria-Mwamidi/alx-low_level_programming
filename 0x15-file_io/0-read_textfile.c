#include "main.h"

/**
 * read_textfile - a function that reads a textfile and
 * prints it to the POSIX stand output
 * @filename: the file to be read
 * @letters: the number of letters it should print and read
 * Return: on success the actual numbr of letters it could read
 * and print on failur -1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_bytes;
	ssize_t write_bytes;
	char *buff;
	int file;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	read_bytes = read(file, buff, letters);
	if (read_bytes == -1)
	{
		close(read_bytes);
		free(buff);
		return (0);
	}
	write_bytes = write(STDOUT_FILENO, buff, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		close(write_bytes);
		free(buff);
		return (0);
	}
	else
	free(buff);
	close(file);
	return (read_bytes);
}
