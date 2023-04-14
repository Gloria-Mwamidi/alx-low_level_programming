#include "main.h"
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @letters: the number of letters it should read and print
 * @filename: the file to be read
 * Return: on success the actual number of letters it could read and print
 *	on failure 0 if the file can not be opened or read
 *	if filename is NULL return 0
 *	if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int tf;
	ssize_t text_file, text_write;
	char *file;

	if (filename == NULL)
		return (0);
	tf = open(filename, O_RDONLY);
	if (tf == -1)
		return (0);
	file = (char *)malloc(sizeof(char) * letters);
		if (file == NULL)
			return (0);
	text_file = read(letters, file, tf);
		if (text_file == -1)
			return (0);
	text_write = write(STDOUT_FILENO, file, text_file);

	close(tf);
	free(file);
	return (text_write);
}
