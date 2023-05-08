#include "main.h"
/**
 * append_text_to_file - a function that appends
 * text at the end of the file
 * @filename: variable representation of the file to be used
 * @text_content: a NULL terminated string to be added at  the end of the file
 *
 * Return: On failure -1 and on success 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_bytes, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	while (text_content[len] != '\0')
	{
		len++;
	}
	write_bytes = write(fd, text_content, len);
	if (write_bytes == -1 || write_bytes != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
