#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t written, cl;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)     /* if file does not exist */
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);    /* file created, no text to add */
	}
	/* count text_content length */
	for (len = 0; text_content[len]; len++)
		;

	written = write(fd, text_content, len);
	if (written == -1)
		return (-1);
	cl = close(fd);
	if (cl == -1)
		return (-1);

	return (1);
}
