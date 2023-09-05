#include "main.h"

/**
 * create_file - function creates a file.
 *
 * @filename: pointer to the name of the file to create.
 * @text_content: the string to write to the file.
 *
 * Return: On success 1.
 * On failure -1, if file cannot be created.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nwrite;


	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
	{
		return (0);
	}

	nwrite = write(fd, text_content, _strlen(text_content));
	if (nwrite == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - function returns the length of a string.
 *
 * @s: the string.
 *
 * Return: length.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}
