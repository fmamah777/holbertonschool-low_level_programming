#include "main.h"

/**
 * append_text_to_file - appends tect to end of a file
 * @text_content: NULL terminated string to add at the end of the file
 * @filename: name of file
 * Return: 1 if success if else failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_size, write_size;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (!fd)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (text_size = 0; text_content[text_size]; text_size++)
	{}

	write_size = write(fd, text_content, text_size);
	close(fd);

	if (text_size != write_size)
		return (-1);

	return (1);
}
