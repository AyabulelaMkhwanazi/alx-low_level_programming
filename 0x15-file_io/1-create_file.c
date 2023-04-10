#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * create_file - function creates a file
 * @filename: name of the file
 * @text_content: string to write to the file
 * Return: 1 (success), else -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int s = 0;
	int b;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, (00600));

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[s] != '\0')
			s++;
	}

	b = write(fd, text_content, s);

	if (fd == -1 && b == -1)
	{
		return (-1);
	}
	close(fd);

	return (1);
}
