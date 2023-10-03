#include "main.h"

/**
 * create_file - function creates a file.
 *
 * @filename: the name of the file to create.
 * @text_content: the string to write to the file.
 *
 * Return: 1 on success, -1 on failure (file can't be created, file can't
 * be written, write "fails").
 * if filename is NULL return -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nread, length = 0;
	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR + S_IWUSR);
	nread = write(fd, text_content, length);

	if (fd == -1 || nread == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
