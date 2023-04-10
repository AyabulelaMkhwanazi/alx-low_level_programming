#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - function taht appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 (success), else -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int r;
	int s = 0; /* to iterate through the text_content string */

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[s] != '\0')
			s++;
	}
	fd = open(filename, O_WRONLY | O_APPEND, 00600);
	r = write(fd, text_content, s);

	if (fd == -1 && r == -1)
		return (-1);

	close(fd);
	return (1);
}
