#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: a pointer to the file
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int x;
	FILE *fp;

	if (filename == NULL)
		return (-1);
	fp = fopen(filename, "w");

	if (fp == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		x = fputs(text_content, fp);

		if (x < 0)
		{
			fclose(fp);
			return (-1);
		}
	}
	fclose(fp);
	return (1);
}
