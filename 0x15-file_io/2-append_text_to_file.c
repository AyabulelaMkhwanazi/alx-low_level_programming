#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file.
 *
 * @filename: the name of the file.
 * @text_content: string to add at the end of the file.
 *
 * Return: On success 1.
 * On error; -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nwrite;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		nwrite = write(fd, text_content, sizeof(char) *_strlen(text_content));
		if (nwrite == -1)
		{
			return (-1);
		}
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
