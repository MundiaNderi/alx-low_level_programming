#include "main.h"

/**
* create_file - creates a file.
* @filename: The name of the file to be created.
* @text_content: content to be placed in the created file.
* Return: 1 if successful, and -1 on err.
*/
int create_file(const char *filename, char *text_content)
{
	int len;
	int fd, wr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fd == -1)
			return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	return (1);

	for (len = 0; text_content[len]; len++)
	{}
	wr = write(fd, text_content, len);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
